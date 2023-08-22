#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <verilated.h>
#include "Vsimtop.h"
#include "Vsimtop___024root.h"


#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include <d3d11.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#include <tchar.h>

#include "imgui_memory_editor.h"


uint32_t t_size;
uint32_t t_addr;

uint32_t exe_load_start;
uint32_t exe_load_end;

uint32_t ram_load_start;
uint32_t ram_load_end;

uint32_t seg_addr;
uint32_t s_size;
uint32_t pc0;
uint32_t gp0;

bool exe_loaded = 0;

// DirectX data
static ID3D11Device*            g_pd3dDevice = NULL;
static ID3D11DeviceContext*     g_pd3dDeviceContext = NULL;
static IDXGIFactory*            g_pFactory = NULL;
static ID3D11Buffer*            g_pVB = NULL;
static ID3D11Buffer*            g_pIB = NULL;
static ID3D10Blob*              g_pVertexShaderBlob = NULL;
static ID3D11VertexShader*      g_pVertexShader = NULL;
static ID3D11InputLayout*       g_pInputLayout = NULL;
static ID3D11Buffer*            g_pVertexConstantBuffer = NULL;
static ID3D10Blob*              g_pPixelShaderBlob = NULL;
static ID3D11PixelShader*       g_pPixelShader = NULL;
static ID3D11SamplerState*      g_pFontSampler = NULL;
static ID3D11ShaderResourceView*g_pFontTextureView = NULL;
static ID3D11RasterizerState*   g_pRasterizerState = NULL;
static ID3D11BlendState*        g_pBlendState = NULL;
static ID3D11DepthStencilState* g_pDepthStencilState = NULL;
static int                      g_VertexBufferSize = 5000, g_IndexBufferSize = 10000;


// Instantiation of module.
//Vsimtop* top = new Vsimtop;	// Verilator 4.224.
static Vsimtop* top;			// Verilator v5.002-117-g31d8b4cb8

char my_string[1024];

char serial_string[1024];
int serial_index = 0;

int str_i = 0;

unsigned int row;
unsigned int col;
unsigned int bank;
unsigned int dram_address;

int pix_count = 0;

unsigned char rgb[3];
bool prev_vsync = 0;
int frame_count = 0;

bool vga_file_select = 0;

bool prev_hsync = 0;
int line_count = 0;

bool prev_sram_we_n = 0;

uint32_t inst_data_temp;

uint32_t prev_pc = 0xDEADBEEF;

unsigned int avm_byte_addr;
unsigned int avm_word_addr;

unsigned int burstcount;
unsigned int byteenable;
unsigned int writedata;

unsigned int datamux;	// What the aoR3000 core is actually reading from the bus! Only valid when avm_readdata_valid is High!
unsigned int datatemp;

unsigned int old_pc;
unsigned int inst_count = 0;

unsigned int old_hw_addr;
unsigned int hw_count = 0;

bool trigger1 = 0;
bool trigger2 = 0;

int trig_count = 0;

bool run_enable = 0;
bool single_step = 0;
bool multi_step = 0;
int multi_step_amount = 256;


// Data
static IDXGISwapChain*          g_pSwapChain = NULL;
static ID3D11RenderTargetView*  g_mainRenderTargetView = NULL;

void CreateRenderTarget()
{
	ID3D11Texture2D* pBackBuffer;
	g_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
	g_pd3dDevice->CreateRenderTargetView(pBackBuffer, NULL, &g_mainRenderTargetView);
	pBackBuffer->Release();
}

void CleanupRenderTarget()
{
	if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = NULL; }
}

HRESULT CreateDeviceD3D(HWND hWnd)
{
	// Setup swap chain
	DXGI_SWAP_CHAIN_DESC sd;
	ZeroMemory(&sd, sizeof(sd));
	sd.BufferCount = 2;
	sd.BufferDesc.Width = 0;
	sd.BufferDesc.Height = 0;
	sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	sd.BufferDesc.RefreshRate.Numerator = 60;
	sd.BufferDesc.RefreshRate.Denominator = 1;
	sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
	sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	sd.OutputWindow = hWnd;
	sd.SampleDesc.Count = 1;
	sd.SampleDesc.Quality = 0;
	sd.Windowed = TRUE;
	sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

	UINT createDeviceFlags = 0;
	//createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
	D3D_FEATURE_LEVEL featureLevel;
	const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
	if (D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext) != S_OK)
		return E_FAIL;

	CreateRenderTarget();

	return S_OK;
}

void CleanupDeviceD3D()
{
	CleanupRenderTarget();
	if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = NULL; }
	if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = NULL; }
	if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = NULL; }
}

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
		return true;

	switch (msg)
	{
	case WM_SIZE:
		if (g_pd3dDevice != NULL && wParam != SIZE_MINIMIZED)
		{
			CleanupRenderTarget();
			g_pSwapChain->ResizeBuffers(0, (UINT)LOWORD(lParam), (UINT)HIWORD(lParam), DXGI_FORMAT_UNKNOWN, 0);
			CreateRenderTarget();
		}
		return 0;
	case WM_SYSCOMMAND:
		if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
			return 0;
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hWnd, msg, wParam, lParam);
}

static float values[90] = { 0 };
static int values_offset = 0;


vluint64_t main_time = 0;	// Current simulation time.

unsigned int file_size;

unsigned char buffer[16];

unsigned int rom_size = 1024 * 1024 * 4;	// 2MB. (32-bit wide).
uint32_t *rom_ptr = (uint32_t *) malloc(rom_size*4);

unsigned int ram_size = 1024 * 1024 * 16;	// 16MB. (64-bit wide).
uint64_t* ram_ptr = (uint64_t*)malloc(ram_size);

unsigned int pvr_size = 32768;				// 32K words (32-bit wide).
uint32_t* pvr_ptr = (uint32_t*)malloc(pvr_size*4);

unsigned int vram_size = 1024 * 1024 * 8;	// 8MB words (8-bit wide).
uint8_t* vram_ptr = (uint8_t*)malloc(vram_size);

unsigned int z_size = 1024 * 1024 * 8;		// 4MB. (32-bit wide).
float *z_ptr = (float *)malloc(z_size*4);

unsigned int tag_size = 1024 * 1024 * 8;	// 4MB. (32-bit wide).
uint32_t* tag_ptr = (uint32_t*)malloc(tag_size*4);

unsigned int disp_size = 1024 * 1024 * 8;	// 8MB. (32-bit wide).
uint32_t *disp_ptr = (uint32_t *)malloc(disp_size);


bool tile_highlight = 0;
bool zoom = 0;


double sc_time_stamp () {	// Called by $time in Verilog.
	return main_time;
}


ImVector<char*>       Items;
static char* Strdup(const char *str) { size_t len = strlen(str) + 1; void* buf = malloc(len); IM_ASSERT(buf); return (char*)memcpy(buf, (const void*)str, len); }

void    MyAddLog(const char* fmt, ...) IM_FMTARGS(2)
{
	// FIXME-OPT
	char buf[1024];
	va_list args;
	va_start(args, fmt);
	vsnprintf(buf, IM_ARRAYSIZE(buf), fmt, args);
	buf[IM_ARRAYSIZE(buf) - 1] = 0;
	va_end(args);
	Items.push_back(Strdup(buf));
}

// Demonstrate creating a simple console window, with scrolling, filtering, completion and history.
// For the console example, here we are using a more C++ like approach of declaring a class to hold the data and the functions.
struct MyExampleAppConsole
{
	char                  InputBuf[256];
	ImVector<const char*> Commands;
	ImVector<char*>       History;
	int                   HistoryPos;    // -1: new line, 0..History.Size-1 browsing history.
	ImGuiTextFilter       Filter;
	bool                  AutoScroll;
	bool                  ScrollToBottom;

	MyExampleAppConsole()
	{
		ClearLog();
		memset(InputBuf, 0, sizeof(InputBuf));
		HistoryPos = -1;
		Commands.push_back("HELP");
		Commands.push_back("HISTORY");
		Commands.push_back("CLEAR");
		Commands.push_back("CLASSIFY");  // "classify" is only here to provide an example of "C"+[tab] completing to "CL" and displaying matches.
		AutoScroll = true;
		ScrollToBottom = false;
		MyAddLog("fpgadc - sh4a Sim start");
		MyAddLog("");
	}
	~MyExampleAppConsole()
	{
		ClearLog();
		for (int i = 0; i < History.Size; i++)
			free(History[i]);
	}

	// Portable helpers
	static int   Stricmp(const char* str1, const char* str2) { int d; while ((d = toupper(*str2) - toupper(*str1)) == 0 && *str1) { str1++; str2++; } return d; }
	static int   Strnicmp(const char* str1, const char* str2, int n) { int d = 0; while (n > 0 && (d = toupper(*str2) - toupper(*str1)) == 0 && *str1) { str1++; str2++; n--; } return d; }
	//	static char* Strdup(const char *str) { size_t len = strlen(str) + 1; void* buf = malloc(len); IM_ASSERT(buf); return (char*)memcpy(buf, (const void*)str, len); }
	static void  Strtrim(char* str) { char* str_end = str + strlen(str); while (str_end > str && str_end[-1] == ' ') str_end--; *str_end = 0; }

	void    ClearLog()
	{
		for (int i = 0; i < Items.Size; i++)
			free(Items[i]);
		Items.clear();
	}

	/*
	void    MyAddLog(const char* fmt, ...) IM_FMTARGS(2)
	{
	// FIXME-OPT
	char buf[1024];
	va_list args;
	va_start(args, fmt);
	vsnprintf(buf, IM_ARRAYSIZE(buf), fmt, args);
	buf[IM_ARRAYSIZE(buf) - 1] = 0;
	va_end(args);
	Items.push_back(Strdup(buf));
	}
	*/

	void    Draw(const char* title, bool* p_open)
	{
		ImGui::SetNextWindowSize(ImVec2(520, 600), ImGuiCond_FirstUseEver);
		if (!ImGui::Begin(title, p_open))
		{
			ImGui::End();
			return;
		}

		// As a specific feature guaranteed by the library, after calling Begin() the last Item represent the title bar. So e.g. IsItemHovered() will return true when hovering the title bar.
		// Here we create a context menu only available from the title bar.
		if (ImGui::BeginPopupContextItem())
		{
			if (ImGui::MenuItem("Close Console"))
				*p_open = false;
			ImGui::EndPopup();
		}

		//ImGui::TextWrapped("This example implements a console with basic coloring, completion and history. A more elaborate implementation may want to store entries along with extra data such as timestamp, emitter, etc.");
		//ImGui::TextWrapped("Enter 'HELP' for help, press TAB to use text completion.");

		//if (ImGui::SmallButton("Add Dummy Text")) { MyAddLog("%d some text", Items.Size); MyAddLog("some more text"); MyAddLog("display very important message here!"); } ImGui::SameLine();
		//if (ImGui::SmallButton("Add Dummy Error")) { MyAddLog("[error] something went wrong"); } ImGui::SameLine();
		if (ImGui::SmallButton("Clear")) { ClearLog(); } ImGui::SameLine();
		bool copy_to_clipboard = ImGui::SmallButton("Copy");
		//static float t = 0.0f; if (ImGui::GetTime() - t > 0.02f) { t = ImGui::GetTime(); MyAddLog("Spam %f", t); }

		ImGui::Separator();

		// Options menu
		if (ImGui::BeginPopup("Options"))
		{
			ImGui::Checkbox("Auto-scroll", &AutoScroll);
			ImGui::EndPopup();
		}

		// Options, Filter
		if (ImGui::Button("Options"))
			ImGui::OpenPopup("Options");
		ImGui::SameLine();
		Filter.Draw("Filter (\"incl,-excl\") (\"error\")", 180);
		ImGui::Separator();

		const float footer_height_to_reserve = ImGui::GetStyle().ItemSpacing.y + ImGui::GetFrameHeightWithSpacing(); // 1 separator, 1 input text
		ImGui::BeginChild("ScrollingRegion", ImVec2(0, -footer_height_to_reserve), false, ImGuiWindowFlags_HorizontalScrollbar); // Leave room for 1 separator + 1 InputText
		if (ImGui::BeginPopupContextWindow())
		{
			if (ImGui::Selectable("Clear")) ClearLog();
			ImGui::EndPopup();
		}

		// Display every line as a separate entry so we can change their color or add custom widgets. If you only want raw text you can use ImGui::TextUnformatted(log.begin(), log.end());
		// NB- if you have thousands of entries this approach may be too inefficient and may require user-side clipping to only process visible items.
		// You can seek and display only the lines that are visible using the ImGuiListClipper helper, if your elements are evenly spaced and you have cheap random access to the elements.
		// To use the clipper we could replace the 'for (int i = 0; i < Items.Size; i++)' loop with:
		//     ImGuiListClipper clipper(Items.Size);
		//     while (clipper.Step())
		//         for (int i = clipper.DisplayStart; i < clipper.DisplayEnd; i++)
		// However, note that you can not use this code as is if a filter is active because it breaks the 'cheap random-access' property. We would need random-access on the post-filtered list.
		// A typical application wanting coarse clipping and filtering may want to pre-compute an array of indices that passed the filtering test, recomputing this array when user changes the filter,
		// and appending newly elements as they are inserted. This is left as a task to the user until we can manage to improve this example code!
		// If your items are of variable size you may want to implement code similar to what ImGuiListClipper does. Or split your data into fixed height items to allow random-seeking into your list.
		ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(4, 1)); // Tighten spacing
		if (copy_to_clipboard)
			ImGui::LogToClipboard();
		for (int i = 0; i < Items.Size; i++)
		{
			const char* item = Items[i];
			if (!Filter.PassFilter(item))
				continue;

			// Normally you would store more information in your item (e.g. make Items[] an array of structure, store color/type etc.)
			bool pop_color = false;
			if (strstr(item, "[error]")) { ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 0.4f, 0.4f, 1.0f)); pop_color = true; }
			else if (strncmp(item, "# ", 2) == 0) { ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 0.8f, 0.6f, 1.0f)); pop_color = true; }
			ImGui::TextUnformatted(item);
			if (pop_color)
				ImGui::PopStyleColor();
		}
		if (copy_to_clipboard)
			ImGui::LogFinish();

		if (ScrollToBottom || (AutoScroll && ImGui::GetScrollY() >= ImGui::GetScrollMaxY()))
			ImGui::SetScrollHereY(1.0f);
		ScrollToBottom = false;

		ImGui::PopStyleVar();
		ImGui::EndChild();
		ImGui::Separator();

		// Command-line
		bool reclaim_focus = false;
		if (ImGui::InputText("Input", InputBuf, IM_ARRAYSIZE(InputBuf), ImGuiInputTextFlags_EnterReturnsTrue | ImGuiInputTextFlags_CallbackCompletion | ImGuiInputTextFlags_CallbackHistory, &TextEditCallbackStub, (void*)this))
		{
			char* s = InputBuf;
			Strtrim(s);
			if (s[0])
				ExecCommand(s);
			strcpy(s, "");
			reclaim_focus = true;
		}

		// Auto-focus on window apparition
		ImGui::SetItemDefaultFocus();
		if (reclaim_focus)
			ImGui::SetKeyboardFocusHere(-1); // Auto focus previous widget

		ImGui::End();
	}

	void    ExecCommand(const char* command_line)
	{
		MyAddLog("# %s\n", command_line);

		// Insert into history. First find match and delete it so it can be pushed to the back. This isn't trying to be smart or optimal.
		HistoryPos = -1;
		for (int i = History.Size - 1; i >= 0; i--)
			if (Stricmp(History[i], command_line) == 0)
			{
				free(History[i]);
				History.erase(History.begin() + i);
				break;
			}
		History.push_back(Strdup(command_line));

		// Process command
		if (Stricmp(command_line, "CLEAR") == 0)
		{
			ClearLog();
		}
		else if (Stricmp(command_line, "HELP") == 0)
		{
			MyAddLog("Commands:");
			for (int i = 0; i < Commands.Size; i++)
				MyAddLog("- %s", Commands[i]);
		}
		else if (Stricmp(command_line, "HISTORY") == 0)
		{
			int first = History.Size - 10;
			for (int i = first > 0 ? first : 0; i < History.Size; i++)
				MyAddLog("%3d: %s\n", i, History[i]);
		}
		else
		{
			MyAddLog("Unknown command: '%s'\n", command_line);
		}

		// On commad input, we scroll to bottom even if AutoScroll==false
		ScrollToBottom = true;
	}

	static int TextEditCallbackStub(ImGuiInputTextCallbackData* data) // In C++11 you are better off using lambdas for this sort of forwarding callbacks
	{
		MyExampleAppConsole* console = (MyExampleAppConsole*)data->UserData;
		return console->TextEditCallback(data);
	}

	int     TextEditCallback(ImGuiInputTextCallbackData* data)
	{
		//MyAddLog("cursor: %d, selection: %d-%d", data->CursorPos, data->SelectionStart, data->SelectionEnd);
		switch (data->EventFlag)
		{
		case ImGuiInputTextFlags_CallbackCompletion:
		{
			// Example of TEXT COMPLETION

			// Locate beginning of current word
			const char* word_end = data->Buf + data->CursorPos;
			const char* word_start = word_end;
			while (word_start > data->Buf)
			{
				const char c = word_start[-1];
				if (c == ' ' || c == '\t' || c == ',' || c == ';')
					break;
				word_start--;
			}

			// Build a list of candidates
			ImVector<const char*> candidates;
			for (int i = 0; i < Commands.Size; i++)
				if (Strnicmp(Commands[i], word_start, (int)(word_end - word_start)) == 0)
					candidates.push_back(Commands[i]);

			if (candidates.Size == 0)
			{
				// No match
				MyAddLog("No match for \"%.*s\"!\n", (int)(word_end - word_start), word_start);
			}
			else if (candidates.Size == 1)
			{
				// Single match. Delete the beginning of the word and replace it entirely so we've got nice casing
				data->DeleteChars((int)(word_start - data->Buf), (int)(word_end - word_start));
				data->InsertChars(data->CursorPos, candidates[0]);
				data->InsertChars(data->CursorPos, " ");
			}
			else
			{
				// Multiple matches. Complete as much as we can, so inputing "C" will complete to "CL" and display "CLEAR" and "CLASSIFY"
				int match_len = (int)(word_end - word_start);
				for (;;)
				{
					int c = 0;
					bool all_candidates_matches = true;
					for (int i = 0; i < candidates.Size && all_candidates_matches; i++)
						if (i == 0)
							c = toupper(candidates[i][match_len]);
						else if (c == 0 || c != toupper(candidates[i][match_len]))
							all_candidates_matches = false;
					if (!all_candidates_matches)
						break;
					match_len++;
				}

				if (match_len > 0)
				{
					data->DeleteChars((int)(word_start - data->Buf), (int)(word_end - word_start));
					data->InsertChars(data->CursorPos, candidates[0], candidates[0] + match_len);
				}

				// List matches
				MyAddLog("Possible matches:\n");
				for (int i = 0; i < candidates.Size; i++)
					MyAddLog("- %s\n", candidates[i]);
			}

			break;
		}
		case ImGuiInputTextFlags_CallbackHistory:
		{
			// Example of HISTORY
			const int prev_history_pos = HistoryPos;
			if (data->EventKey == ImGuiKey_UpArrow)
			{
				if (HistoryPos == -1)
					HistoryPos = History.Size - 1;
				else if (HistoryPos > 0)
					HistoryPos--;
			}
			else if (data->EventKey == ImGuiKey_DownArrow)
			{
				if (HistoryPos != -1)
					if (++HistoryPos >= History.Size)
						HistoryPos = -1;
			}

			// A better implementation would preserve the data on the current input line along with cursor position.
			if (prev_history_pos != HistoryPos)
			{
				const char* history_str = (HistoryPos >= 0) ? History[HistoryPos] : "";
				data->DeleteChars(0, data->BufTextLen);
				data->InsertChars(0, history_str);
			}
		}
		}
		return 0;
	}
};

static void ShowMyExampleAppConsole(bool* p_open)
{
	static MyExampleAppConsole console;
	console.Draw("Debug Log", p_open);
}

uint32_t bios_word;

#define MIN(i, j) (((i) < (j)) ? (i) : (j))
#define MAX(i, j) (((i) > (j)) ? (i) : (j))

static float mmin(float a, float b, float c, float d)
{
	float rv = MIN(a, b);
	rv = MIN(c, rv);
	return MAX(d, rv);
}

static float mmax(float a, float b, float c, float d)
{
	float rv = MAX(a, b);
	rv = MAX(c, rv);
	return MIN(d, rv);
}

#define pvr_access(mod) top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__##mod;


uint32_t disp_addr;

bool ra_running = 0;


inline int32_t float_to_fixed(float d, uint32_t p)
{
	return int32_t(d * (1<<p));
}

//inline float fixed_to_float(int d, uint32_t p)
//{
//	return float(d * (1>>p));
//}

inline int32_t MUL_PREC(int32_t a, int32_t b, int PREC) {
	return (((int64_t)a) * b)>>PREC;
}

/*
	Surface equation solver
*/
struct PlaneStepper3
{
	float ddx, ddy;
	float c;

	void Setup(float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3)
	{
		float Aa = ((z3 - z1) * (y2 - y1) - (z2 - z1) * (y3 - y1));
		float Ba = ((x3 - x1) * (z2 - z1) - (x2 - x1) * (z3 - z1));

		float C  = ((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));

		ddx = -Aa / C;
		ddy = -Ba / C;

		c = (z1 - ddx * x1 - ddy * y1);
	}

	__forceinline float Ip(float x, float y) const { return x * ddx + y * ddy + c; }

	__forceinline float Ip(float x, float y, float W) const { return Ip(x, y) * W; }
};


union mem128i {
	uint8_t m128i_u8[16];
	int8_t m128i_i8[16];
	int16_t m128i_i16[8];
	int32_t m128i_i32[4];
	uint32_t m128i_u32[4];
};

// Clamp and flip a texture coordinate
static int ClampFlip(bool pp_Clamp, bool pp_Flip, int coord, int size) {
	if (pp_Clamp) { // clamp
		if (coord < 0) {
			coord = 0;
		}
		else if (coord >= size) {
			coord = size-1;
		}
	}
	else if (pp_Flip) { // flip
		coord &= size*2-1;
		if (coord & size) {
			coord ^= size*2-1;
		}
	}
	else { //wrap
		coord &= size-1;
	}

	return coord;
}

const uint32_t MipPoint[8] =
{
	0x00006, //8
	0x00016, //16
	0x00056, //32
	0x00156, //64
	0x00556, //128
	0x01556, //256
	0x05556, //512
	0x15556  //1024
};

// byte offsets for mipmaps for 4bpp and 8bpp paletted textures
static unsigned const mipmap_byte_offset_pal[11] ={
	0x3, 0x4, 0x8, 0x18, 0x58, 0x158, 0x558, 0x1558, 0x5558, 0x15558, 0x55558
};

// byte offsets for mipmaps for VQ textures
static unsigned const mipmap_byte_offset_vq[11] ={
	0x0, 0x1, 0x2, 0x6, 0x16, 0x56, 0x156, 0x556, 0x1556, 0x5556, 0x15556
};

// byte offsets for mipmaps for "normal" textures
static unsigned const mipmap_byte_offset_norm[11] ={
	0x6, 0x8, 0x10, 0x30, 0xb0, 0x2b0, 0xab0, 0x2ab0, 0xaab0, 0x2aab0, 0xaaab0
};

uint32_t twiddle_slow(uint32_t x, uint32_t y, uint32_t x_sz, uint32_t y_sz)
{
	uint32_t rv=0;//low 2 bits are directly passed  -> needs some misc stuff to work.
	//However, Pvr internally maps the 64b banks "as if" they were twiddled :p

	uint32_t sh=0;
	x_sz>>=1;
	y_sz>>=1;
	while (x_sz!=0 || y_sz!=0)
	{
		if (y_sz)
		{
			uint32_t temp=y&1;
			rv|=temp<<sh;

			y_sz>>=1;
			y>>=1;
			sh++;
		}
		if (x_sz)
		{
			uint32_t temp=x&1;
			rv|=temp<<sh;

			x_sz>>=1;
			x>>=1;
			sh++;
		}
	}
	return rv;
}

uint32_t tex_addr = 0;
uint32_t texel_offs = 0;

#define FRAC_BITS 8

PlaneStepper3 Z;
PlaneStepper3 U;
PlaneStepper3 V;

uint32_t detwiddle[2][8][1024];
#define twop(x,y,bcx,bcy) (detwiddle[0][bcy][x]+detwiddle[1][bcx][y])

void BuildTwiddleTables()
{
	for (uint32_t s=0; s<8; s++)
	{
		uint32_t x_sz=1024;
		uint32_t y_sz=8<<s;
		for (uint32_t i=0; i<x_sz; i++)
		{
			detwiddle[0][s][i]=twiddle_slow(i, 0, x_sz, y_sz);
			detwiddle[1][s][i]=twiddle_slow(0, i, y_sz, x_sz);
		}
	}
}

uint32_t read_vram_32(uint32_t addr) {		// BYTE address!
	uint8_t byte0 = vram_ptr[ (addr+0)&0x7fffff ];
	uint8_t byte1 = vram_ptr[ (addr+1)&0x7fffff ];
	uint8_t byte2 = vram_ptr[ (addr+2)&0x7fffff ];
	uint8_t byte3 = vram_ptr[ (addr+3)&0x7fffff ];

	uint32_t data =  (byte3<<24) | (byte2<<16) | (byte1<<8) | byte0;

	return data;
};

uint64_t read_vram_64(uint32_t addr) {		// BYTE address!
	uint8_t byte0 = vram_ptr[ (addr+0)&0x7fffff ];
	uint8_t byte1 = vram_ptr[ (addr+1)&0x7fffff ];
	uint8_t byte2 = vram_ptr[ (addr+2)&0x7fffff ];
	uint8_t byte3 = vram_ptr[ (addr+3)&0x7fffff ];

	uint8_t byte4 = vram_ptr[ (0x400000+addr+0)&0x7fffff ];
	uint8_t byte5 = vram_ptr[ (0x400000+addr+1)&0x7fffff ];
	uint8_t byte6 = vram_ptr[ (0x400000+addr+2)&0x7fffff ];
	uint8_t byte7 = vram_ptr[ (0x400000+addr+3)&0x7fffff ];

	uint32_t upper_word = (byte7<<24) | (byte6<<16) | (byte5<<8) | (byte4);
	uint32_t lower_word = (byte3<<24) | (byte2<<16) | (byte1<<8) | (byte0);

	uint64_t data = (uint64_t)((upper_word<<32) | lower_word);

	return data;
};

uint8_t index_byte = 0;

uint32_t vq_tex_index = 0;

uint32_t vram_tex_addr;

void rasterize_triangle_fixed(float x1, float x2, float x3,
							  float y1, float y2, float y3,
							  float z1, float z2, float z3,
							  float u1, float u2, float u3,
							  float v1, float v2, float v3) {
	
	// Lazy culling...
	//if (x1>640 || x2>640 || x3>640 || y1>480 || y2>480 || y3>480) return;	// Hydro Thunder title wouldn't display when this was >639 and >480 ??
	if (x1<0 || x2<0 || x3<0 || y1<0 || y2<0 || y3<0) return;				// Hide spikey bits / neg values.

	// Check for NaN...
	/*
	if (x1 != x1) return;
	if (x2 != x2) return;
	if (x3 != x3) return;
	if (y1 != y1) return;
	if (y2 != y2) return;
	if (y3 != y3) return;
	if (z1 != z1) return;
	if (z2 != z2) return;
	if (z3 != z3) return;

	if (x1< -200) return;
	if (x2< -200) return;
	if (x3< -200) return;
	if (x1>  800) return;
	if (x2>  800) return;
	if (x3>  800) return;

	if (y1< -200) return;
	if (y2< -200) return;
	if (y3< -200) return;
	if (y1>  600) return;
	if (y2>  600) return;
	if (y3>  600) return;

	if (x1<1) x1 = 1;
	if (x2<1) x2 = 1;
	if (x3<1) x3 = 1;
	if (x1>639) x1 = 639;
	if (x2>639) x2 = 639;
	if (x3>639) x3 = 639;

	if (y1<1) y1 = 1;
	if (y2<1) y2 = 1;
	if (y3<1) y3 = 1;
	if (y1>479) y1 = 479;
	if (y2>479) y2 = 479;
	if (y3>479) y3 = 479;
	*/

	float f_area = (x1-x3) * (y2-y3) - (y1-y3) * (x2-x3);
	bool sgn = (f_area > 0);

	/*
	uint8_t cullmode = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__culling_mode;

	bool vertex_offset = 0;	// TESTING.

	// cull
	if (cullmode != 0) {
		float abs_area = fabsf(f_area);

		if (abs_area < top->rootp->simtop__DOT__pvr__DOT__FPU_CULL_VAL) return;

		if (cullmode >= 2) {
			uint32_t mode = vertex_offset ^ (cullmode & 1);
			if ((mode == 0 && f_area < 0) || (mode == 1 && f_area > 0)) return;
		}
	}
	*/

	uint32_t area_left = 0;
	uint32_t area_top = 0;
	uint32_t area_right = 0;
	uint32_t area_bottom = 0;

	// Bounding rectangle
	int minx = mmin(x1, x2, x3, area_left);
	int miny = mmin(y1, y2, y3, area_top);

	int spanx = mmax(x1+1, x2+1, x3+1, area_right-1)  - minx+1;
	int spany = mmax(y1+1, y2+1, y3+1, area_bottom-1) - miny+1;

	// Convert to Fixed-point coords.
	const int FX1 = float_to_fixed(x1, FRAC_BITS);
	const int FX2 = float_to_fixed(x2, FRAC_BITS);
	const int FX3 = float_to_fixed(x3, FRAC_BITS);
	//const int FX4 = float_to_fixed(x4, FRAC_BITS);

	const int FY1 = float_to_fixed(y1, FRAC_BITS);
	const int FY2 = float_to_fixed(y2, FRAC_BITS);
	const int FY3 = float_to_fixed(y3, FRAC_BITS);
	//const int FY4 = float_to_fixed(y4, FRAC_BITS);
	
	const int FZ1 = float_to_fixed(z1, FRAC_BITS);

	float x3_sub_x1 = x3 - x1;
	float y2_sub_y1 = y2 - y1;
	float x2_sub_x1 = x2 - x1;
	float y3_sub_y1 = y3 - y1;

	top->v3_a = FX3;
	top->v1_a = FX1;

	top->v2_y = FY2;
	top->v1_y = FY1;

	top->v2_a = FX2;
	top->v1_a = FX1;

	top->v3_y = FY3;
	top->v1_y = FY1;

	float Aa = ((x3 - x1) * (y2 - y1)) - ((x2 - x1) * (y3 - y1));

	int Aa_fixed = top->Aa;

	//printf("x1: %f  x2: %f  x3: %f  y1: %f  y2: %f  y3: %f \n", x1, x2, x3, y1, y2, y3);

	//int v3a_sub_v1a = top->rootp->simtop__DOT__pvr__DOT__edge_calc_1_inst__DOT__v3a_sub_v1a;
	//int v2y_sub_v1y = top->rootp->simtop__DOT__pvr__DOT__edge_calc_1_inst__DOT__v2y_sub_v1y;
	//int v2a_sub_v1a = top->rootp->simtop__DOT__pvr__DOT__edge_calc_1_inst__DOT__v2a_sub_v1a;
	//int v3y_sub_v1y = top->rootp->simtop__DOT__pvr__DOT__edge_calc_1_inst__DOT__v3y_sub_v1y;
	//printf("float x3_sub_x1: %f  core v3a_sub_v1a: %f\n", x3_sub_x1, ((float)v3a_sub_v1a)/(1<<FRAC_BITS) );
	//printf("float y2_sub_y1: %f  core v2y_sub_v1y: %f\n", y2_sub_y1, ((float)v2y_sub_v1y)/(1<<FRAC_BITS) );
	//printf("float x2_sub_x1: %f  core v2a_sub_v1a: %f\n", x2_sub_x1, ((float)v2a_sub_v1a)/(1<<FRAC_BITS) );
	//printf("float y3_sub_y1: %f  core v3y_sub_v1y: %f\n", y3_sub_y1, ((float)v3y_sub_v1y)/(1<<FRAC_BITS) );
	//printf("float Aa = %4.6f        core Aa (float) %4.6f \n", Aa, ((float)Aa_fixed)/(1<<FRAC_BITS) );
	//printf("fixed Aa_mult_1 raw = 0x%08X \n", top->rootp->simtop__DOT__pvr__DOT__edge_calc_1_inst__DOT__Aa_mult_1);
	//printf("v3a_sub_v1a = 0x%08X \n", top->rootp->simtop__DOT__pvr__DOT__edge_calc_1_inst__DOT__v3a_sub_v1a);
	//printf("v2y_sub_v1y = 0x%08X \n\n", top->rootp->simtop__DOT__pvr__DOT__edge_calc_1_inst__DOT__v2y_sub_v1y);


	// Fixed-point Deltas
	const int FDX12 = sgn ? (FX2-FX1) : (FX1-FX2);
	const int FDX23 = sgn ? (FX3-FX2) : (FX2-FX3);
	const int FDX31 = sgn ? (FX1-FX3) : (FX3-FX1);
	//const int FDX41 = (x4 || y4) ? sgn ? (FX1-FX4) : (FX4-FX1) : 0;
	//printf("fixed FDX12: %f  FDX23: %f  FDX31: %f\n", ((float)FDX12/1<<FRAC_BITS), ((float)FDX23/1<<FRAC_BITS), ((float)FDX31/1<<FRAC_BITS));

	const int FDY12 = sgn ? (FY2-FY1) : (FY1-FY2);
	const int FDY23 = sgn ? (FY3-FY2) : (FY2-FY3);
	const int FDY31 = sgn ? (FY1-FY3) : (FY3-FY1);
	//const int FDY41 = (x4 || y4) ? sgn ? (FY1-FY4) : (FY4-FY1) : 0;
	//printf("fixed FDY12: %f  FDY23: %f  FDY31: %f\n", ((float)FDY12/1<<FRAC_BITS), ((float)FDY23/1<<FRAC_BITS), ((float)FDY31/1<<FRAC_BITS));

	// Bounding rectangle
	//int minx = min(FX1,FX2,FX3)>>16;
	//int maxx = max(FX1,FX2,FX3)>>16;
	//int miny = min(FY1,FY2,FY3)>>16;
	//int maxy = max(FY1,FY2,FY3)>>16;

	// Half-edge constants
	//int C1 = FDY12 * FX1 - FDX12 * FY1;
	//int C2 = FDY23 * FX2 - FDX23 * FY2;
	//int C3 = FDY31 * FX3 - FDX31 * FY3;
	//int C4 = FDY41 * FX4 - FDX41 * FY1;
	int FDY12_MULT = MUL_PREC(FDY12, FX1, FRAC_BITS); int FDX12_MULT = MUL_PREC(FDX12, FY1, FRAC_BITS);
	int FDY23_MULT = MUL_PREC(FDY23, FX2, FRAC_BITS); int FDX23_MULT = MUL_PREC(FDX23, FY2, FRAC_BITS);
	int FDY31_MULT = MUL_PREC(FDY31, FX3, FRAC_BITS); int FDX31_MULT = MUL_PREC(FDX31, FY3, FRAC_BITS);
	//int FDY41_MULT = MUL_PREC(FDY41, FX4, FRAC_BITS); int FDX41_MULT = MUL_PREC(FDX41, FY4, FRAC_BITS);
	//printf("fixed FDY12_MULT: %f  FDX12_MULT: %f\n\n", ((float)FDY12_MULT/(1<<FRAC_BITS), ((float)FDX12_MULT/1<<FRAC_BITS) );

	int C1 = FDY12_MULT - FDX12_MULT;
	int C2 = FDY23_MULT - FDX23_MULT;
	int C3 = FDY31_MULT - FDX31_MULT;
	//int C4 = (x4 || y4) ? FDY41_MULT - FDX41_MULT : 1;
	//printf("fixed C1: %f  fixed C2: %f  fixed C3: %f\n\n", ((float)C1/1<<FRAC_BITS), ((float)C2/1<<FRAC_BITS), ((float)C3/1<<FRAC_BITS));

	// Correct for fill convention
	if ((FDY12>>FRAC_BITS) < 0 || (FDY12>>FRAC_BITS) == 0 && (FDX12>>FRAC_BITS) > 0) C1=C1+(1<<FRAC_BITS);
	if ((FDY23>>FRAC_BITS) < 0 || (FDY23>>FRAC_BITS) == 0 && (FDX23>>FRAC_BITS) > 0) C2=C2+(1<<FRAC_BITS);
	if ((FDY31>>FRAC_BITS) < 0 || (FDY31>>FRAC_BITS) == 0 && (FDX31>>FRAC_BITS) > 0) C3=C3+(1<<FRAC_BITS);

	// Texture size values are 0=8, 1=16, 2=32, 3=64, 4=128, etc.
	uint32_t tex_u_size_full = 8<<(top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size&7);
	uint32_t tex_v_size_full = 8<<(top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size&7);

	uint8_t alpha = 0xff;

	//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_entry_valid) {
		//int halfpixel = 1<<(FRAC_BITS-1);
		int y_ps = miny /*+ halfpixel*/;
		int minx_ps = minx /*+ halfpixel*/;

		if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_entry_valid) {
			top->rootp->spanx = spanx;
			top->rootp->spany = spany;
			top->rootp->minx = minx;
			top->rootp->miny = miny;

			top->rootp->FX1 = FX1;
			top->rootp->FX2 = FX2;
			top->rootp->FX3 = FX3;

			top->rootp->FY1 = FY1;
			top->rootp->FY2 = FY2;
			top->rootp->FY3 = FY3;

			top->rootp->FDX12 = FDX12;
			top->rootp->FDY12 = FDY12;

			top->rootp->FDX23 = FDX23;
			top->rootp->FDY23 = FDY23;

			top->rootp->FDX31 = FDX31;
			top->rootp->FDY31 = FDY31;

			Z.Setup(x1, x2, x3, y1, y2, y3, z1, z2, z3);

			//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture) {
				int w = tex_u_size_full-1;
				int h = tex_v_size_full-1;
				U.Setup(x1, x2, x3, y1, y2, y3, u1 * w * z1, u2 * w * z2, u3 * w * z3);
				V.Setup(x1, x2, x3, y1, y2, y3, v1 * h * z1, v2 * h * z2, v3 * h * z3);
			//}
		}

		float invW = Z.Ip(top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps, top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps);	// Interpolate the Z value, based on X and Y.

		if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture) {
			float u = U.Ip((float)top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps, (float)top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps, 1/invW);
			float v = V.Ip((float)top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps, (float)top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps, 1/invW);

			bool pp_FlipU  = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_flip;
			bool pp_FlipV  = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_flip;
			bool pp_ClampU = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_clamp;
			bool pp_ClampV = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_clamp;

			//printf("flipu: %d  flipv: %d  clampu: %d  clampv: %d\n", pp_FlipU, pp_FlipV, pp_ClampU, pp_ClampV);

			// Float to uint...
			uint32_t ui = u;
			uint32_t vi = v;

			ui = ClampFlip(pp_ClampU, pp_FlipU, ui, tex_u_size_full);
			vi = ClampFlip(pp_ClampV, pp_FlipV, vi, tex_v_size_full);

			bool scan_order_flag = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__scan_order;
			//if (scan_order_flag==0) texel_offs = twiddle_slow(ui,vi,tex_u_size_full,tex_v_size_full);
			//else texel_offs = ui + (vi * tex_u_size_full);	// Non-Twiddled..
			if(scan_order_flag==0) texel_offs = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop;
			else texel_offs = ui + (vi * tex_u_size_full);	// Non-Twiddled.

			uint16_t tex_u_size_raw = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size;
			uint16_t tex_v_size_raw = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size;

			bool mipmap_flag = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map;

			/*
			// Need to add 3 to tex_u_size_raw, because the mipmap table starts at a 1x1 texture size, but tex_u_size==0 is the 8x8 texture size.
			uint32_t mipmap_norm_or_vq_offs = (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp) ? mipmap_byte_offset_vq[ tex_u_size_raw+3 ] :
																												   mipmap_byte_offset_norm[ tex_u_size_raw+3 ];

			// Need to add 3 to tex_u_size_raw, because the mipmap table starts at a 1x1 texture size, but tex_u_size==0 is the 8x8 texture size.
			uint32_t mipmap_byte_offs_pal = mipmap_byte_offset_pal[ tex_u_size_raw+3 ];

			uint32_t mipmap_byte_offs;
			switch (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt) {
				case 0: mipmap_byte_offs = (mipmap_flag) ? mipmap_norm_or_vq_offs : 0;	// ARGB 1555. (16BPP).
				case 1: mipmap_byte_offs = (mipmap_flag) ? mipmap_norm_or_vq_offs : 0;	// RGB  565.  (16BPP).
				case 2: mipmap_byte_offs = (mipmap_flag) ? mipmap_norm_or_vq_offs : 0;	// ARGB 4444. (16BPP).
				case 3: mipmap_byte_offs = (mipmap_flag) ? mipmap_norm_or_vq_offs : 0;	// YUV422.    (16BPP, sort of).
				case 4: mipmap_byte_offs = (mipmap_flag) ? mipmap_norm_or_vq_offs : 0;	// Bump Map.  (16BPP. S value + R value).
				case 5: mipmap_byte_offs = (mipmap_flag) ? mipmap_byte_offs_pal   : 0;	// 4 BPP Palette.
				case 6: mipmap_byte_offs = (mipmap_flag) ? mipmap_byte_offs_pal   : 0;	// 8 BPP Palette.
				case 7: mipmap_byte_offs = (mipmap_flag) ? mipmap_norm_or_vq_offs : 0;	// Reserved. Considered the same as pix_fmt 0 (ARGB 1555).
			}

			uint32_t tcw_tex_addr_word = (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word&0x1fffff);
			switch (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt) {
				case 0: vram_tex_addr = tcw_tex_addr_word + (mipmap_byte_offs>>3);	// ARGB 1555. (16BPP).
				case 1: vram_tex_addr = tcw_tex_addr_word + (mipmap_byte_offs>>3);	// RGB  565.  (16BPP).
				case 2: vram_tex_addr = tcw_tex_addr_word + (mipmap_byte_offs>>3);	// ARGB 4444. (16BPP).
				case 3: vram_tex_addr = tcw_tex_addr_word + (mipmap_byte_offs>>3);	// YUV422.    (16BPP, sort of).
				case 4: vram_tex_addr = tcw_tex_addr_word + (mipmap_byte_offs>>3);	// Bump Map.  (16BPP. S value + R value).
				case 5: vram_tex_addr = tcw_tex_addr_word + (mipmap_byte_offs>>5);	// 4 BPP Palette.
				case 6: vram_tex_addr = tcw_tex_addr_word + (mipmap_byte_offs>>4);	// 8 BPP Palette.
				case 7: vram_tex_addr = tcw_tex_addr_word + (mipmap_byte_offs>>3);	// Reserved. Considered the same as pix_fmt 0 (ARGB 1555).
			}
			*/

			// Says "64-bit word addr" on PDF page 212 of the System Architecture manual...
			// But I think they meant 64-bit DATA, and 32-bit ADDRESS, since the textures are fetched as 64-bit data on the PVR2?
			// 
			// An example tcw_word value for the "Play" texture on the Menu is 0x140C8E00.
			// The lower 21 bits masked would give 0xC8E00. This is the 32-bit WORD address of the texture...
			// 
			// NOTE: The above is kind of wrong. The "width" of the address depends on the data bus width.
			// Textures on PVR2 are (usually) read via the full 64-bit data bus, with the lower 32-bit word in the lower 4MB,
			// and the upper 32-bit word in the upper 4MB (the words are interleaved).
			// 
			// The 8MB VRAM on Dreamcast is split into two 32-bit wide banks. They each have their own address.
			// So each half of VRAM can be read as 32-bit wide (for params etc.), or combined, to read as 64-bit wide for textures etc.
			// 
			tex_addr = (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word&0x1fffff) << 2;	// BYTE addr.

			uint16_t texel_pix0 = 0x0000;
			uint16_t texel_pix1 = 0x0000;
			uint16_t texel_pix2 = 0x0000;
			uint16_t texel_pix3 = 0x0000;
			uint16_t texel_pix = 0x0000;

			// Shove ui and vi into the core...
			top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__ui = ui;
			top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vi = vi;

			// Read the values from the core (I realize this will be delayed by one verilog eval cycle, but it's good enough for testing).
			uint32_t tex_addr_core		= top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__tex_addr_word << 2; // Make into BYTE address!
			uint32_t mipmap_byte_offs_core	= top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__mipmap_byte_offs;
			uint32_t vram_tex_addr_core = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__vram_tex_addr;
			uint32_t twop_core          = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_out;

			if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp) {
				// VQ requires a shift of the mipmap byte offset?
				// Need to add 3 to tex_u_size_raw, because the mipmap table starts at a 1x1 texture size, but tex_u_size==0 is the 8x8 texture size.
				//uint32_t mipmap_offs = (mipmap_flag) ? mipmap_byte_offset_vq[ tex_u_size_raw+3]>>1 : 0;

				// Looks like twop address basically hops to each 64-bit wide word.
				// But we needs the extra shift, to address each 32-bit wide word in each half of VRAM...
				if ( !(twop_core&4) ) vq_tex_index = 0x000000+1024+tex_addr_core+(mipmap_byte_offs_core>>1) + (twop_core>>3);
				else                  vq_tex_index = 0x400000+1024+tex_addr_core+(mipmap_byte_offs_core>>1) + (twop_core>>3);

				uint8_t index_byte = vram_ptr[ (vq_tex_index)&0x7fffff ];

				// Group of FOUR 16-bit texels (8 CODE BOOK Bytes) per index_byte.
				// (but we only shift by <<2 here, because we read a 32-bit word from both the lower and upper 4MB VRAM.)
				switch ((twop_core)&3) {
					case 0: texel_pix = read_vram_32( 0x000000 + tex_addr_core + (index_byte<<2) ) >> 16;    break;
					case 1: texel_pix = read_vram_32( 0x000000 + tex_addr_core + (index_byte<<2) ) & 0xffff; break;
					case 2: texel_pix = read_vram_32( 0x400000 + tex_addr_core + (index_byte<<2) ) >> 16;    break;
					case 3: texel_pix = read_vram_32( 0x400000 + tex_addr_core + (index_byte<<2) ) & 0xffff; break;
				}
			}
			else {	// Non-VQ / Uncompressed.
				// Need to add 3 to tex_u_size_raw, because the mipmap table starts at a 1x1 texture size, but tex_u_size==0 is the 8x8 texture size.
				//uint32_t mipmap_offs = (mipmap_flag) ? mipmap_byte_offset_norm[ tex_u_size_raw+3 ] : 0;

				//if (scan_order_flag==0) texel_offs = twiddle_slow(ui,vi,tex_u_size_full,tex_v_size_full);
				//else texel_offs = ui + (vi * tex_u_size_full);	// Non-Twiddled..

				switch (twop_core&3) {
					case 0: texel_pix  = vram_ptr[ 0x000000 + ((tex_addr_core+mipmap_byte_offs_core) + ((twop_core&0xfffffffc)+0)) & 0x7fffff ];
							texel_pix |= vram_ptr[ 0x000000 + ((tex_addr_core+mipmap_byte_offs_core) + ((twop_core&0xfffffffc)+1)) & 0x7fffff ] << 8; break;

					case 1: texel_pix  = vram_ptr[ 0x000000 + ((tex_addr_core+mipmap_byte_offs_core) + ((twop_core&0xfffffffc)+2)) & 0x7fffff ];
							texel_pix |= vram_ptr[ 0x000000 + ((tex_addr_core+mipmap_byte_offs_core) + ((twop_core&0xfffffffc)+3)) & 0x7fffff ] << 8; break;

					case 2: texel_pix  = vram_ptr[ 0x400000 + ((tex_addr_core+mipmap_byte_offs_core) + ((twop_core&0xfffffffc)+0)) & 0x7fffff ];
							texel_pix |= vram_ptr[ 0x400000 + ((tex_addr_core+mipmap_byte_offs_core) + ((twop_core&0xfffffffc)+1)) & 0x7fffff ] << 8; break;

					case 3: texel_pix  = vram_ptr[ 0x400000 + ((tex_addr_core+mipmap_byte_offs_core) + ((twop_core&0xfffffffc)+2)) & 0x7fffff ];
							texel_pix |= vram_ptr[ 0x400000 + ((tex_addr_core+mipmap_byte_offs_core) + ((twop_core&0xfffffffc)+3)) & 0x7fffff ] << 8; break;
				}
			}

			uint8_t pix_fmt = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt;
			if (pix_fmt==0 || pix_fmt==7) {
				// ARGB 1555 (Swirl logo, etc.)...;
				alpha = (texel_pix&0x8000) ? 0xff : 0x00;
				rgb[0] = ((texel_pix>>7) & 0xf8) | ((texel_pix>>12) & 0x07);	// Red.
				rgb[1] = ((texel_pix>>2) & 0xf8) | ((texel_pix>>7)  & 0x07);	// Green.
				rgb[2] = ((texel_pix<<3) & 0xf8) | ((texel_pix>>2)  & 0x07);	// Blue.
			}
			else if (pix_fmt==1) {
				// RGB 565...				// RGB 565...
				alpha = 0xff;
				rgb[0] = ((texel_pix>>8) & 0xf8) | (texel_pix>>13) & 0x7;	// Red.
				rgb[1] = ((texel_pix>>3) & 0xfc) | (texel_pix>>9)  & 0x3;	// Green.
				rgb[2] = ((texel_pix<<3) & 0xf8) | (texel_pix>>2)  & 0x7;	// Blue.
			}
			else if (pix_fmt==2) {
				// ARGB 4444...
				alpha = (texel_pix>>8)&0xf0 | (texel_pix>>12)&0x0f;
				rgb[0] = ((texel_pix>>4) & 0xf0) | ((texel_pix>>8) & 0x0f);	// Red.
				rgb[1] = ((texel_pix>>0) & 0xf0) | ((texel_pix>>4) & 0x0f);	// Green.
				rgb[2] = ((texel_pix<<4) & 0xf0) | ((texel_pix>>0) & 0x0f);	// Blue.
			}
			else if (pix_fmt==5 /*|| pix_fmt==6*/) {	// TESTING !!! Using this for both PAL4 and PAL8 atm.
				// PAL4
				// Need to shift the output from mipmap_byte_offset_pal, as it points to each NIBBLE for PAL4.
				// (or points to each BYTE for PAL8).
				//uint32_t mipmap_offs = (mipmap_flag) ? mipmap_byte_offset_pal[ tex_u_size_raw+3 ]>>1 : 0;
				
				// Palette format (4BBP and 8BPP) always use a twiddled texel address.
				uint8_t vram_byte  = !(twop_core&2) ? vram_ptr[ 0x000000+(tex_addr_core+mipmap_byte_offs_core)+(twop_core>>2) ] :
													  vram_ptr[ 0x400000+(tex_addr_core+mipmap_byte_offs_core)+(twop_core>>2) ];

				uint8_t pal_nibble = !(twop_core&1) ? (vram_byte>>4) & 0xf :
													  (vram_byte>>0) & 0xf;
				
				/*
				uint32_t vram_word = !(twop_core&4) ? read_vram_32( 0x000000+(tex_addr_core+mipmap_byte_offs_core)+(twop_core>>2) ) :
													  read_vram_32( 0x400000+(tex_addr_core+mipmap_byte_offs_core)+(twop_core>>2) );

				uint8_t pal_nibble;
				switch ( twop_core&7 ) {
					case 0: pal_nibble = (vram_word>>0)  & 0xf;
					case 1: pal_nibble = (vram_word>>4)  & 0xf;
					case 2: pal_nibble = (vram_word>>8)  & 0xf;
					case 3: pal_nibble = (vram_word>>12) & 0xf;
					case 4: pal_nibble = (vram_word>>16) & 0xf;
					case 5: pal_nibble = (vram_word>>20) & 0xf;
					case 6: pal_nibble = (vram_word>>24) & 0xf;
					case 7: pal_nibble = (vram_word>>28) & 0xf;
				}
				*/

				uint16_t pal_lut = (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__pal_selector<<4) | pal_nibble;
				texel_pix = pvr_ptr[ (0x1000>>2) + pal_lut ] & 0xffff;	// Read from Palette RAM (part of the PVR regs).

				// ARGB 1555 (Swirl logo, etc.)...;
				uint8_t pal_fmt = pvr_ptr[(0x108>>2)]&03;
				switch (pal_fmt) {
					case 0:	// ARGB 1555.
						alpha = (texel_pix&0x8000) ? 0xff : 0x00;
						rgb[0] = ((texel_pix>>7) & 0xf8) | ((texel_pix>>12) & 0x07);	// Red.
						rgb[1] = ((texel_pix>>2) & 0xf8) | ((texel_pix>>7)  & 0x07);	// Green.
						rgb[2] = ((texel_pix<<3) & 0xf8) | ((texel_pix>>2)  & 0x07);	// Blue.
					break;

					case 1:	// RGB 565.
						alpha = 0xff;
						rgb[0] = ((texel_pix>>8) & 0xf8) | (texel_pix>>13) & 0x7;	// Red.
						rgb[1] = ((texel_pix>>3) & 0xfc) | (texel_pix>>9)  & 0x3;	// Green.
						rgb[2] = ((texel_pix<<3) & 0xf8) | (texel_pix>>2)  & 0x7;	// Blue.
					break;

					case 2:	// ARGB 4444.
						alpha = (texel_pix>>8)&0xf0 | (texel_pix>>12)&0x0f;
						rgb[0] = ((texel_pix>>4) & 0xf0) | ((texel_pix>>8) & 0x0f);	// Red.
						rgb[1] = ((texel_pix>>0) & 0xf0) | ((texel_pix>>4) & 0x0f);	// Green.
						rgb[2] = ((texel_pix<<4) & 0xf0) | ((texel_pix>>0) & 0x0f);	// Blue.
					break;

					case 3:	// TODO: 3 = YUV422.
						//alpha = (texel_pix>>8)&0xf0 | (texel_pix>>12)&0x0f;
						//rgb[0] = ((texel_pix>>4) & 0xf0) | ((texel_pix>>8) & 0x0f);	// Red.
						//rgb[1] = ((texel_pix>>0) & 0xf0) | ((texel_pix>>4) & 0x0f);	// Green.
						//rgb[2] = ((texel_pix<<4) & 0xf0) | ((texel_pix>>0) & 0x0f);	// Blue.
					break;
				}
			}
			// TODO...
			// 3 = YUV422.
			// 4 = Bump Map.
			// 5 = 4 BPP Palette. (part done)
			// 6 = 8 BPP Palette.
			else {	// Default, to show *anything*. (until more pixel formats are handled).
				// ARGB 4444...
				alpha = (texel_pix>>8)&0xf0 | (texel_pix>>12)&0x0f;
				rgb[0] = ((texel_pix>>4) & 0xf0) | ((texel_pix>>8) & 0x0f);	// Red.
				rgb[1] = ((texel_pix>>0) & 0xf0) | ((texel_pix>>4) & 0x0f);	// Green.
				rgb[2] = ((texel_pix<<4) & 0xf0) | ((texel_pix>>0) & 0x0f);	// Blue.
			}
		}
		else {	// Non-textured, so use Flat-shaded for now. Gouraud stuff later.
			uint32_t vertex_c_col = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0;
			alpha  = (vertex_c_col&0xff000000)>>24;
			rgb[0] = (vertex_c_col&0x00ff0000)>>16;
			rgb[1] = (vertex_c_col&0x0000ff00)>>8;
			rgb[2] = (vertex_c_col&0x000000ff);
		}

		if (top->vram_wr) {
			float old_z = z_ptr[(top->vram_addr&0x7fffff)>>2];
			uint8_t depth_mode = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__depth_comp;
			//if (render_mode == RM_PUNCHTHROUGH) depth_mode = 6;		// TODO: FIXME
			//else if (render_mode == RM_TRANSLUCENT) depth_mode = 3;	// TODO: FIXME
			//else if (render_mode == RM_MODIFIER) depth_mode = 6;
			bool allow_write = 0;
			switch (depth_mode) {
				case 0: allow_write = 0;			   break; // Never.
				case 1: allow_write = (invW <  old_z); break; // Less.
				case 2: allow_write = (invW == old_z); break; // Equal.
				case 3: allow_write = (invW <= old_z); break; // Less or Equal
				case 4: allow_write = (invW >  old_z); break; // Greater.
				case 5: allow_write = (invW != old_z); break; // Not Equal.
				case 6: allow_write = (invW >= old_z); break; // Greater or Equal.
				case 7: allow_write = 1;			   break; // Always
			}

			if (allow_write) {
				if (!top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__z_write_disable) z_ptr[ (top->vram_addr&0x7fffff)>>2 ] = invW;
				//uint32_t z_fixed = float_to_fixed(invW, 28);	// Convert Z from float to fixed-point.
				//if (!top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__z_write_disable) z_ptr[ (top->vram_addr&0x7fffff)>>2 ] = z_fixed;
				if (alpha==0xff) disp_ptr[ (top->vram_addr&0x7fffff)>>2 ] = 0xff<<24 | rgb[2]<<16 | rgb[1]<<8 | rgb[0];
				else {
					uint8_t old_pix[3];
					old_pix[2] = disp_ptr[(top->vram_addr&0x7fffff)>>2] >> 16;
					old_pix[1] = disp_ptr[(top->vram_addr&0x7fffff)>>2] >> 8;
					old_pix[0] = disp_ptr[(top->vram_addr&0x7fffff)>>2];

					uint8_t result[3];
					result[0] = (uint8_t)( ( (alpha+1) * rgb[0] + (256-alpha) * old_pix[0]) >> 8);
					result[1] = (uint8_t)( ( (alpha+1) * rgb[1] + (256-alpha) * old_pix[1]) >> 8);
					result[2] = (uint8_t)( ( (alpha+1) * rgb[2] + (256-alpha) * old_pix[2]) >> 8);

					disp_ptr[ (top->vram_addr&0x7fffff)>>2 ] = 0xff<<24 | result[2]<<16 | result[1]<<8 | result[0];
				}
			}
		}
	//}
}

int verilate() {
	if (!Verilated::gotFinish()) {
		if (main_time < 4) {
			top->rst = 1;   	// Assert reset (active HIGH)
		}
		if (main_time == 10) {	// Do == here, so we can still reset it in the main loop.
			top->rst = 0;		// Deassert reset./
		}

		top->rootp->simtop__DOT__pvr__DOT__ra_trig = 0;
		if (!ra_running) top->rootp->simtop__DOT__pvr__DOT__ra_trig = 1;
		if (top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state>0) ra_running = 1;

		pix_count++;

		//top->rootp->boot_vector = 0xA0000000;
		top->rootp->boot_vector = 0x00000000;

		// Instruction memory...
		uint32_t im_addr = 0x00000000;
		if ( top->im_req_valid ) im_addr = top->im_req_addr;

		uint32_t dm_addr = 0x00000000;
		if ( top->dm_req_valid ) dm_addr = top->dm_req_addr;
		
		// Data memory...
		uint64_t old_dm_data = ram_ptr[ (top->dm_req_addr&0xffffff)>>3 ];

		// Handle SDRAM Write masking...
		if (top->dm_req_valid && top->dm_req_wen /*&& top->rootp->dm_req_addr>=0x0C000000 && top->rootp->dm_req_addr<=0x0FFFFFFF*/) {
			if (top->dm_req_wmask&0x80) old_dm_data = (old_dm_data&0x00ffffffffffffff) | (top->dm_req_wdata&0xff00000000000000);
			if (top->dm_req_wmask&0x40) old_dm_data = (old_dm_data&0xff00ffffffffffff) | (top->dm_req_wdata&0x00ff000000000000);
			if (top->dm_req_wmask&0x20) old_dm_data = (old_dm_data&0xffff00ffffffffff) | (top->dm_req_wdata&0x0000ff0000000000);
			if (top->dm_req_wmask&0x10) old_dm_data = (old_dm_data&0xffffff00ffffffff) | (top->dm_req_wdata&0x000000ff00000000);
			if (top->dm_req_wmask&0x08) old_dm_data = (old_dm_data&0xffffffff00ffffff) | (top->dm_req_wdata&0x00000000ff000000);
			if (top->dm_req_wmask&0x04) old_dm_data = (old_dm_data&0xffffffffff00ffff) | (top->dm_req_wdata&0x0000000000ff0000);
			if (top->dm_req_wmask&0x02) old_dm_data = (old_dm_data&0xffffffffffff00ff) | (top->dm_req_wdata&0x000000000000ff00);
			if (top->dm_req_wmask&0x01) old_dm_data = (old_dm_data&0xffffffffffffff00) | (top->dm_req_wdata&0x00000000000000ff);
			ram_ptr[ (top->dm_req_addr & 0xffffff)>>3 ] = old_dm_data;
		}

		bios_word = rom_ptr[(im_addr&0x1fffff)>>2];
		//if ( (im_addr&0x1fffff)>=0x00000000 && (im_addr&0x1fffff)<=0x03FFFFFF) top->im_resp_rdata = bios_word;
		top->im_resp_rdata = (top->rootp->simtop__DOT__bios_cs) ? bios_word : ram_ptr[ (im_addr&0xffffff)>>3 ];	// SDRAM Instruction.
		top->dm_resp_rdata = (top->rootp->simtop__DOT__bios_cs) ? bios_word : ram_ptr[ (dm_addr&0xffffff)>>3 ];	// SDRAM Data.
		
		top->im_resp_valid = 1;
		top->dm_resp_valid = 1;

		rgb[0] = 0xff;	// Red.
		rgb[1] = 0xff;	// Green.
		rgb[2] = 0xff;	// Blue.

		// vram_din doesn't seem to get routed to the other modules???
		uint32_t vram_addr = top->rootp->simtop__DOT__pvr__DOT__vram_addr&0x7fffff;

		uint8_t byte3 = vram_ptr[ (vram_addr+0) & 0x7fffff ];
		uint8_t byte2 = vram_ptr[ (vram_addr+1) & 0x7fffff ];
		uint8_t byte1 = vram_ptr[ (vram_addr+2) & 0x7fffff ];
		uint8_t byte0 = vram_ptr[ (vram_addr+3) & 0x7fffff ];

		// Have to byte swap here, because Wintel...
		uint16_t upper_word = byte0<<8 | byte1;
		uint16_t lower_word = byte2<<8 | byte3;

		top->vram_din = upper_word<<16 | lower_word;
		top->rootp->simtop__DOT__pvr__DOT__ra_vram_din  = upper_word<<16 | lower_word;
		top->rootp->simtop__DOT__pvr__DOT__isp_vram_din = upper_word<<16 | lower_word;

		if (tile_highlight && top->rootp->simtop__DOT__pvr__DOT__ra_entry_valid) {
			uint32_t x_start = top->rootp->simtop__DOT__pvr__DOT__ra_cont_tilex * 32;
			uint32_t y_start = top->rootp->simtop__DOT__pvr__DOT__ra_cont_tiley * 32;
			// Draw a 32x32 square outline, to denote the current RA tile.
			for (int y = y_start; y < (y_start+32); y++) {
				for (int x = x_start; x < (x_start+32); x++) {
					if (x==x_start || x==x_start+31 || y==y_start || y==y_start+31) {
						rgb[0] = 0xff; rgb[1] = 0x00; rgb[2] = 0x00;
						disp_addr = (y * 640) + x;
						disp_ptr[disp_addr] = 0xff<<24 | rgb[2]<<16 | rgb[1]<<8 | rgb[0];
					}
				}
			}
		}

		float x1,x2,x3,x4;
		float y1,y2,y3,y4;
		float z1,z2,z3,z4;

		//X1: 43C994E8 403.163330  X2: 43C994E8 403.163330  X3: 43BC780C 376.937866  X4: 00000000 0.000000
		//Y1: 43074970 135.286865  Y2: 4391829E 291.020447  Y3: 43074970 135.286865  Y4: 00000000 0.000000
		x1 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x;
		x2 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x;
		x3 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x;
		x4 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x;

		y1 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y;
		y2 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y;
		y3 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y;
		y4 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y;

		z1 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z;
		z2 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z;
		z3 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z;
		z4 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_z;

		//if (z2 > 1.0) run_enable = 0;
		//if (z3 > 1.0) run_enable = 0;
		//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr==0x13720 &&
			//top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt==1) run_enable = 0;

		//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr==0x26e4c) run_enable = 0;
		//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr==0x23c44) run_enable = 0;
		//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr==0x23f3c) run_enable = 0;
		//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr==0x47e024) run_enable = 0;
		//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr==0x4eab0) run_enable = 0;

		//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr==0xa9610 && top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt==1) run_enable = 0;

		float u1,u2,u3,u4 = 0;
		float v1,v2,v3,v4 = 0;

		if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit) {
			uint32_t u1_temp = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0&0xffff0000;
			uint32_t u2_temp = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0&0xffff0000;
			uint32_t u3_temp = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0&0xffff0000;
			uint32_t u4_temp = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0&0xffff0000;
			u1 = *(float*)&u1_temp;
			u2 = *(float*)&u2_temp;
			u3 = *(float*)&u3_temp;
			u4 = *(float*)&u4_temp;

			// U and V are BOTH taken from the u0 regs!...
			uint32_t v1_temp = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0<<16;
			uint32_t v2_temp = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0<<16;
			uint32_t v3_temp = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0<<16;
			uint32_t v4_temp = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0<<16;
			v1 = *(float*)&v1_temp;
			v2 = *(float*)&v2_temp;
			v3 = *(float*)&v3_temp;
			v4 = *(float*)&v4_temp;

			//printf("uv_16_bit u1: %f  v1: %f\n", u1, v1);
		}
		else {
			u1 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0;
			u2 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0;
			u3 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0;
			u4 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0;

			v1 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0;
			v2 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0;
			v3 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0;
			v4 = *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0;
		}

		top->clk = 1;
		top->eval();            // Evaluate model!
		top->clk = 0;
		top->eval();            // Evaluate model!
		main_time++;            // Time passes...

		rasterize_triangle_fixed(x1, x2, x3, y1, y2, y3, z1, z2, z3, u1, u2, u3, v1, v2, v3);

		/*
		tex_addr = 0x34a190;	// Crazy Taxi title.
		//tex_addr = 0x2A1510;	// Foghorn background.
		//tex_addr = 0x23b3a0;	// Foghorn "Space Race" logo on big TV.
		//uint16_t tex_u_size = 8<<top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size;
		//uint16_t tex_v_size = 8<<top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size;
		uint16_t tex_u_size = 128;
		uint16_t tex_v_size = 128;
		uint16_t texel_pix = 0xf000;

		uint32_t mipmap_offs = 0;
		bool mipmap_flag = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map;

		if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp)
			mipmap_offs = (mipmap_flag) ? MipPoint[top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size]>>1 : 0;

		bool pp_FlipU  = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_flip;
		bool pp_FlipV  = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_flip;
		bool pp_ClampU = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_clamp;
		bool pp_ClampV = top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_clamp;

		for (int vi=0; vi<tex_v_size; vi++) {
			for (int ui=0; ui<tex_u_size; ui++) {
				//ui = ClampFlip(pp_ClampU, pp_FlipU, ui, tex_u_size);
				//vi = ClampFlip(pp_ClampV, pp_FlipV, vi, tex_v_size);

				uint32_t twop_addr = twiddle_slow(ui, vi, tex_u_size, tex_v_size);
				//uint32_t twop_addr = twop(ui, vi, top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size, 
					//top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size);

				// Looks like twop address basically hops to each 64-bit wide word.
				// So it needs an extra shift, to address each 32-bit wide word in each half of VRAM??
				if (!(twop_addr&4)) vq_tex_index = tex_addr+mipmap_offs+1024 + (twop_addr>>3);
				else       vq_tex_index = tex_addr+mipmap_offs+0x400000+1024 + (twop_addr>>3);

				uint8_t index_byte = vram_ptr[(vq_tex_index)&0x7fffff];

				//uint8_t index_byte;
				//switch (twop_addr&7) {
					//case 0: index_byte = vram_ptr[(tex_addr+         mipmap_offs+1024 + ((twop_addr&0xfffffffc)>>0) + 0) & 0x7fffff];
					//case 1: index_byte = vram_ptr[(tex_addr+         mipmap_offs+1024 + ((twop_addr&0xfffffffc)>>0) + 1) & 0x7fffff];
					//case 2: index_byte = vram_ptr[(tex_addr+         mipmap_offs+1024 + ((twop_addr&0xfffffffc)>>0) + 2) & 0x7fffff];
					//case 3: index_byte = vram_ptr[(tex_addr+         mipmap_offs+1024 + ((twop_addr&0xfffffffc)>>0) + 3) & 0x7fffff];
					//case 4: index_byte = vram_ptr[(tex_addr+0x400000+mipmap_offs+1024 + ((twop_addr&0xfffffffc)>>0) + 0) & 0x7fffff];
					//case 5: index_byte = vram_ptr[(tex_addr+0x400000+mipmap_offs+1024 + ((twop_addr&0xfffffffc)>>0) + 1) & 0x7fffff];
					//case 6: index_byte = vram_ptr[(tex_addr+0x400000+mipmap_offs+1024 + ((twop_addr&0xfffffffc)>>0) + 2) & 0x7fffff];
					//case 7: index_byte = vram_ptr[(tex_addr+0x400000+mipmap_offs+1024 + ((twop_addr&0xfffffffc)>>0) + 3) & 0x7fffff];
				//}

				// Group of FOUR 16-bit texels (8 CODE BOOK Bytes) per index_byte.
				// (but we only shift by <<2 here, because we read a 32-bit word from both the lower and upper 4MB VRAM.)
				//switch ( (twop_addr>>2)&3 ) {
				switch ((index_byte)&3) {
					case 0: texel_pix = read_vram_32(tex_addr + 0x000000 + (index_byte<<2)) >> 16; break;
					case 1: texel_pix = read_vram_32(tex_addr + 0x000000 + (index_byte<<2)) & 0xffff; break;
					case 2: texel_pix = read_vram_32(tex_addr + 0x400000 + (index_byte<<2)) >> 16; break;
					case 3: texel_pix = read_vram_32(tex_addr + 0x400000 + (index_byte<<2)) & 0xffff; break;
				}

				// ARGB 4444...
				//uint8_t alpha = (texel_pix>>8)&0xf0;
				rgb[0] = ((texel_pix>>4) & 0xf0) | ((texel_pix>>8) & 0x0f);	// Red.
				rgb[1] = ((texel_pix>>0) & 0xf0) | ((texel_pix>>4) & 0x0f);	// Green.
				rgb[2] = ((texel_pix<<4) & 0xf0) | ((texel_pix>>0) & 0x0f);	// Blue.

				// RGB 565...
				//uint8_t alpha = 0xff;
				//rgb[0] = ((texel_pix>>8) & 0xf8) | (texel_pix>>13) & 0x7;	// Red.
				//rgb[1] = ((texel_pix>>3) & 0xfc) | (texel_pix>>9)  & 0x3;	// Green.
				//rgb[2] = ((texel_pix<<3) & 0xf8) | (texel_pix>>2)  & 0x7;	// Blue.

				uint32_t disp_addr = (vi * 640) + ui;

				disp_ptr[ disp_addr&0x7fffff ] = 0xff<<24 | rgb[2]<<16 | rgb[1]<<8 | rgb[0];
			}
		}
		*/

		return 1;
	}


	// Stop Verilating...
	top->final();
	delete top;
	exit(0);
	return 0;
}


int my_count = 0;

static MemoryEditor mem_edit_1;
static MemoryEditor mem_edit_2;
static MemoryEditor mem_edit_3;
static MemoryEditor mem_edit_4;
static MemoryEditor mem_edit_5;

int main(int argc, char** argv, char** env) {

	// Create application window
	WNDCLASSEX wc = { sizeof(WNDCLASSEX), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(NULL), NULL, NULL, NULL, NULL, _T("ImGui Example"), NULL };
	RegisterClassEx(&wc);
	HWND hwnd = CreateWindow(wc.lpszClassName, _T("Dear ImGui DirectX11 Example"), WS_OVERLAPPEDWINDOW, 100, 100, 1280, 800, NULL, NULL, wc.hInstance, NULL);

	// Initialize Direct3D
	if (CreateDeviceD3D(hwnd) < 0)
	{
		CleanupDeviceD3D();
		UnregisterClass(wc.lpszClassName, wc.hInstance);
		return 1;
	}

	// Show the window
	ShowWindow(hwnd, SW_SHOWMAXIMIZED);
	UpdateWindow(hwnd);

	// Setup Dear ImGui context
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO(); (void)io;
	//io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls

	// Setup Dear ImGui style
	ImGui::StyleColorsDark();
	//ImGui::StyleColorsClassic();

	// Setup Platform/Renderer bindings
	ImGui_ImplWin32_Init(hwnd);
	ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);

	// Load Fonts
	// - If no fonts are loaded, dear imgui will use the default font. You can also load multiple fonts and use ImGui::PushFont()/PopFont() to select them.
	// - AddFontFromFileTTF() will return the ImFont* so you can store it if you need to select the font among multiple.
	// - If the file cannot be loaded, the function will return NULL. Please handle those errors in your application (e.g. use an assertion, or display an error and quit).
	// - The fonts will be rasterized at a given size (w/ oversampling) and stored into a texture when calling ImFontAtlas::Build()/GetTexDataAsXXXX(), which ImGui_ImplXXXX_NewFrame below will call.
	// - Read 'misc/fonts/README.txt' for more instructions and details.
	// - Remember that in C/C++ if you want to include a backslash \ in a string literal you need to write a double backslash \\ !
	//io.Fonts->AddFontDefault();
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/Roboto-Medium.ttf", 16.0f);
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/Cousine-Regular.ttf", 15.0f);
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/DroidSans.ttf", 16.0f);
	//io.Fonts->AddFontFromFileTTF("../../misc/fonts/ProggyTiny.ttf", 10.0f);
	//ImFont* font = io.Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\ArialUni.ttf", 18.0f, NULL, io.Fonts->GetGlyphRangesJapanese());
	//IM_ASSERT(font != NULL);


	Verilated::commandArgs(argc, argv);

	top = new Vsimtop;

	//uint32_t value = 0xff222222;
	uint32_t value = 0xff000000;
	for (uint32_t i = 0; i < disp_size/2; i+=4 ) memcpy(((char*)disp_ptr) + i, &value, 4);
	for (uint32_t i = 0; i < z_size; i++) z_ptr[ i ] = 0;
	for (uint32_t i = 0; i < tag_size; i++) tag_ptr[i] = 0;

	memset(ram_ptr, 0x00, ram_size);

	unsigned int file_size=0;

	FILE *biosfile;
	biosfile = fopen("mpr-21931.ic501","rb");	// Default DC BIOS in MAME v0249b, using the "dc" driver option.
	//biosfile = fopen("256b.bin","rb");
	//biosfile = fopen("roto.bin","rb");
	//biosfile = fopen("hello.bin","rb");
	if (biosfile!=NULL) printf("\nDC BIOS loaded OK.\n\n");
	else { printf("\nDC BIOS file not found!\n\n"); return 0; }
	fseek(biosfile, 0L, SEEK_END);
	file_size = ftell(biosfile);
	fseek(biosfile, 0L, SEEK_SET);
	fread(rom_ptr, 1, rom_size, biosfile);

	FILE* pvrfile;
	FILE* vram_file;
	//pvrfile = fopen("pvr_regs_logo", "rb");			  vram_file = fopen("vram_logo.bin", "rb");
	//pvrfile = fopen("pvr_regs_menu", "rb");			  vram_file = fopen("vram_menu.bin", "rb");
	//pvrfile = fopen("pvr_regs_menu2", "rb");			  vram_file = fopen("vram_menu2.bin", "rb");
	//pvrfile = fopen("pvr_regs_mem", "rb");			  vram_file = fopen("vram_mem.bin", "rb");
	//pvrfile = fopen("pvr_regs_taxi", "rb");			  vram_file = fopen("vram_taxi.bin", "rb");
	//pvrfile = fopen("pvr_regs_taxi2", "rb");			  vram_file = fopen("vram_taxi2.bin", "rb");
	//pvrfile = fopen("pvr_regs_taxi3", "rb");			  vram_file = fopen("vram_taxi3.bin", "rb");
	//pvrfile = fopen("pvr_regs_taxi4", "rb");			  vram_file = fopen("vram_taxi4.bin", "rb");
	//pvrfile = fopen("pvr_regs_crazy_title", "rb");	  vram_file = fopen("vram_crazy_title.bin", "rb");
	//pvrfile = fopen("pvr_regs_crazy_title_2", "rb");	  vram_file = fopen("vram_crazy_title_2.bin", "rb");
	//pvrfile = fopen("pvr_regs_sonic", "rb");			  vram_file = fopen("vram_sonic.bin", "rb");
	//pvrfile = fopen("pvr_regs_sonic_title", "rb");	  vram_file = fopen("vram_sonic_title.bin", "rb");
	//pvrfile = fopen("pvr_regs_hydro_title", "rb");	  vram_file = fopen("vram_hydro_title.bin", "rb");	// Disable lazy culling, to get this to show!
	//pvrfile = fopen("pvr_regs_looney_foghorn", "rb");	  vram_file = fopen("vram_looney_foghorn.bin", "rb");
	//pvrfile = fopen("pvr_regs_looney_startline", "rb"); vram_file = fopen("vram_looney_startline.bin", "rb");
	//pvrfile = fopen("pvr_regs_sw_ep1_menu", "rb");	  vram_file = fopen("vram_sw_ep1_menu.bin", "rb");
	//pvrfile = fopen("pvr_regs_hotd2_title", "rb");	  vram_file = fopen("vram_hotd2_title.bin", "rb");
	//pvrfile = fopen("pvr_regs_hotd2_zombies", "rb");	  vram_file = fopen("vram_hotd2_zombies.bin", "rb");
	//pvrfile = fopen("pvr_regs_hotd2_selfie", "rb");	  vram_file = fopen("vram_hotd2_selfie.bin", "rb");
	//pvrfile = fopen("pvr_regs_hotd2_car_fire", "rb");	  vram_file = fopen("vram_hotd2_car_fire.bin", "rb");
	//pvrfile = fopen("pvr_regs_hotd2_boat", "rb");		  vram_file = fopen("vram_hotd2_boat.bin", "rb");
	//pvrfile = fopen("pvr_regs_hotd2_gargoyle", "rb");	  vram_file = fopen("vram_hotd2_gargoyle.bin", "rb");
	//pvrfile = fopen("pvr_regs_rayman_title", "rb");	  vram_file = fopen("vram_rayman_title.bin", "rb");
	//pvrfile = fopen("pvr_regs_rayman_lights", "rb");	  vram_file = fopen("vram_rayman_lights.bin", "rb");
	//pvrfile = fopen("pvr_regs_xtreme_intro", "rb");	  vram_file = fopen("vram_xtreme_intro.bin", "rb");	// TODO: PAL8. (it's why the textures look weird)
	pvrfile = fopen("pvr_regs_daytona_intro", "rb");	  vram_file = fopen("vram_daytona_intro.bin", "rb");
	//pvrfile = fopen("pvr_regs_daytona_behind", "rb");	  vram_file = fopen("vram_daytona_behind.bin", "rb");
	//pvrfile = fopen("pvr_regs_daytona_front", "rb");	  vram_file = fopen("vram_daytona_front.bin", "rb");
	//pvrfile = fopen("pvr_regs_daytona_sanic", "rb");	  vram_file = fopen("vram_daytona_sanic.bin", "rb");
	//pvrfile = fopen("pvr_regs_toy_front", "rb");		  vram_file = fopen("vram_toy_front.bin", "rb");

	if (pvrfile != NULL) printf("\npvr_regs dump loaded OK.\n\n");
	else { printf("\npvr_regs dump file not found!\n\n"); return 0; }
	fseek(pvrfile, 0L, SEEK_END);
	file_size = ftell(pvrfile);
	fseek(pvrfile, 0L, SEEK_SET);
	fread(pvr_ptr, 1, pvr_size, pvrfile);

	top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__TA_ALLOC_CTRL = pvr_ptr[ 0x140>>2 ];
	top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__REGION_BASE   = pvr_ptr[ 0x02C>>2 ];
	top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__PARAM_BASE    = pvr_ptr[ 0x020>>2 ];

	if (vram_file != NULL) printf("\nvram.bin dump loaded OK.\n\n");
	else { printf("\nvram.bin dump file not found!\n\n"); return 0; }
	fseek(vram_file, 0L, SEEK_END);
	file_size = ftell(vram_file);
	fseek(vram_file, 0L, SEEK_SET);
	fread(vram_ptr, 1, vram_size, vram_file);


	// Our state
	bool show_demo_window = true;
	bool show_another_window = false;
	ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

	// Build texture atlas
	int width  = 640;
	int height = 480;

	// Upload texture to graphics system
	D3D11_TEXTURE2D_DESC desc;
	ZeroMemory(&desc, sizeof(desc));
	desc.Width = width;
	desc.Height = height;
	desc.MipLevels = 1;
	desc.ArraySize = 1;
	desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	desc.SampleDesc.Count = 1;
	desc.Usage = D3D11_USAGE_DEFAULT;
	desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
	desc.CPUAccessFlags = D3D11_CPU_ACCESS_WRITE;

	ID3D11Texture2D *pTexture = NULL;
	D3D11_SUBRESOURCE_DATA subResource;
	subResource.pSysMem = disp_ptr;
	subResource.SysMemPitch = desc.Width * 4;
	subResource.SysMemSlicePitch = 0;
	g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);

	// Create texture view
	D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc;
	ZeroMemory(&srvDesc, sizeof(srvDesc));
	srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
	srvDesc.Texture2D.MipLevels = desc.MipLevels;
	srvDesc.Texture2D.MostDetailedMip = 0;
	g_pd3dDevice->CreateShaderResourceView(pTexture, &srvDesc, &g_pFontTextureView);
	pTexture->Release();

	// Store our identifier
	ImTextureID my_tex_id = (ImTextureID)g_pFontTextureView;

	
	// Create texture sampler
	{
		D3D11_SAMPLER_DESC desc;
		ZeroMemory(&desc, sizeof(desc));
		//desc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
		desc.Filter = D3D11_FILTER_MIN_MAG_MIP_POINT;
		desc.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
		desc.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
		desc.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
		desc.MipLODBias = 0.f;
		desc.ComparisonFunc = D3D11_COMPARISON_ALWAYS;
		desc.MinLOD = 0.f;
		desc.MaxLOD = 0.f;
		g_pd3dDevice->CreateSamplerState(&desc, &g_pFontSampler);
	}


	bool follow_writes = 0;
	int write_address = 0;

	static bool show_app_console = true;
	
	BuildTwiddleTables();

	// imgui Main loop stuff...
	MSG msg;
	ZeroMemory(&msg, sizeof(msg));
	while (msg.message != WM_QUIT)
	{
		// Poll and handle messages (inputs, window resize, etc.)
		// You can read the io.WantCaptureMouse, io.WantCaptureKeyboard flags to tell if dear imgui wants to use your inputs.
		// - When io.WantCaptureMouse is true, do not dispatch mouse input data to your main application.
		// - When io.WantCaptureKeyboard is true, do not dispatch keyboard input data to your main application.
		// Generally you may always pass all inputs to dear imgui, and hide them from your application based on those two flags.
		if (PeekMessage(&msg, NULL, 0U, 0U, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
			continue;
		}

		// Start the Dear ImGui frame
		ImGui_ImplDX11_NewFrame();
		ImGui_ImplWin32_NewFrame();
		ImGui::NewFrame();

		// 1. Show the big demo window (Most of the sample code is in ImGui::ShowDemoWindow()! You can browse its code to learn more about Dear ImGui!).
		//if (show_demo_window)
		//	ImGui::ShowDemoWindow(&show_demo_window);

		// 2. Show a simple window that we create ourselves. We use a Begin/End pair to created a named window.
		static float f = 0.1f;
		static int counter = 0;

		ImGui::Begin("Virtual Dev Board v1.0");		// Create a window called "Virtual Dev Board v1.0" and append into it.

		ShowMyExampleAppConsole(&show_app_console);

		//ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / ImGui::GetIO().Framerate, ImGui::GetIO().Framerate);
		//ImGui::PlotLines("Lines", values, IM_ARRAYSIZE(values), values_offset, "sample", -1.0f, 1.0f, ImVec2(0, 80));
		bool key_f3 = ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_F3));
		if (ImGui::Button("RESET") || key_f3) {
			main_time = 0;
			ra_running = 0;

			// Clear the Z-buffer.
			for (uint32_t i = 0; i < z_size; i++) {
				z_ptr[i] = 0;
			}

			// Clear the Tag buffer.
			for (uint32_t i = 0; i < tag_size; i++) {
				tag_ptr[i] = 0;
			}
			
			// Clear the DISPLAY buffer...
			//uint32_t value = 0xff222222;
			uint32_t value = 0xff000000;
			for (uint32_t i = 0; i < disp_size / 2; i += 4) {
				memcpy(((char*)disp_ptr) + i, &value, 4);
			}
		}

		ImGui::Text("main_time %d", main_time);
		ImGui::Text("frame_count: %d  line_count: %d", frame_count, line_count);

		ImGui::Checkbox("RUN", &run_enable);
		ImGui::SameLine(); ImGui::Checkbox("Tile Highlight", &tile_highlight);
		ImGui::SameLine(); ImGui::Checkbox("Zoom 2x", &zoom);

		if (single_step == 1) single_step = 0;
		if (ImGui::Button("Single Step")) {
			run_enable = 0;
			single_step = 1;
		}

		if (multi_step == 1) multi_step = 0;
		if (ImGui::Button("Multi Step")) {
			run_enable = 0;
			multi_step = 1;
		}
		ImGui::SameLine(); ImGui::SliderInt("Step amount", &multi_step_amount, 4, 1024);

		ImGui::Image(my_tex_id, ImVec2(width<<zoom, height<<zoom), ImVec2(0, 0), ImVec2(1, 1), ImColor(255, 255, 255, 255), ImColor(255, 255, 255, 128));
		ImGui::End();

		ImGui::Begin("RAM Editor");
		mem_edit_1.DrawContents(ram_ptr, ram_size, 0);
		ImGui::End();

		ImGui::Begin("PVR regs dump Editor");
		mem_edit_2.Cols = 4;
		mem_edit_2.DrawContents(pvr_ptr, pvr_size, 0);
		ImGui::End();

		ImGui::Begin("VRAM dump Editor");
		mem_edit_3.Cols = 4;
		//mem_edit_3.HighlightColor = 0xFF888800;	// ABGR, probably

		//uint32_t vq_index = tex_addr + 2048 + (texel_offs>>2);

		mem_edit_3.HighlightColor = 0xFF888800;	// ABGR, probably
		//mem_edit_3.HighlightMin = (top->rootp->simtop__DOT__pvr__DOT__vram_addr&0x7fffff);
		//mem_edit_3.HighlightMax = (top->rootp->simtop__DOT__pvr__DOT__vram_addr&0x7fffff)+4;
		mem_edit_3.HighlightMin = vq_tex_index;
		mem_edit_3.HighlightMax = vq_tex_index + 1;
		//mem_edit_3.HighlightMin = (vq_index) & 0x7fffff;
		//mem_edit_3.HighlightMax = (vq_index+256) & 0x7fffff;
		//mem_edit_3.HighlightMin = (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last) & 0x7fffff;
		//mem_edit_3.HighlightMax = (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_vram_addr_last+32) & 0x7fffff;
		mem_edit_3.DrawContents(vram_ptr, vram_size, 0);
		ImGui::End();

		ImGui::Begin("BIOS Editor");
		/*
		ImGui::Checkbox("Follow Writes", &follow_writes);
		if (follow_writes) write_address = top->sd_addr << 2;
		*/
		mem_edit_4.DrawContents(rom_ptr, rom_size, 0);
		ImGui::End();

		ImGui::Begin("Tag Buffer Editor");
		mem_edit_5.Cols = 4;
		mem_edit_5.DrawContents(tag_ptr, tag_size, 0);
		ImGui::End();

		
		ImGui::Begin("SH4 Regfile0");
		ImGui::Text("   if_pc_plus4: 0x%08X", top->rootp->simtop__DOT__core__DOT__if_pc_plus4);
		ImGui::Text("            PC: 0x%08X", top->rootp->simtop__DOT__core__DOT__if_reg_pc);
		ImGui::Text("  im_req_valid: %d", top->rootp->im_req_valid);
		ImGui::Text("   im_req_addr: 0x%08X", top->rootp->im_req_addr);
		ImGui::Text("     bios_word: 0x%08X", bios_word);
		ImGui::Text(" im_resp_rdata: 0x%08X", top->rootp->im_resp_rdata);
		ImGui::Separator();
		ImGui::Text("  dm_req_valid: %d", top->rootp->dm_req_valid);
		ImGui::Text("   dm_req_addr: 0x%08X", top->rootp->dm_req_addr);
		ImGui::Text(" dm_resp_rdata: 0x%08X", top->rootp->dm_resp_rdata);
		ImGui::Text("  dm_req_wdata: 0x%08X", top->rootp->dm_req_wdata);
		ImGui::Text("  dm_req_wmask: 0x%02X", top->rootp->dm_req_wmask);
		ImGui::Text("    dm_req_wen: %d", top->rootp->dm_req_wen);
		ImGui::Separator();
		ImGui::Text("e1_reg_exu_opl: 0x%08X", top->rootp->simtop__DOT__core__DOT__e1_reg_exu_opl);
		ImGui::Text("e1_reg_exu_oph: 0x%08X", top->rootp->simtop__DOT__core__DOT__e1_reg_exu_oph);
		ImGui::Text(" id_instr0_opl: 0x%08X", top->rootp->simtop__DOT__core__DOT__id_instr0_opl);
		ImGui::Text(" id_instr1_opl: 0x%08X", top->rootp->simtop__DOT__core__DOT__id_instr1_opl);
		ImGui::Separator();
		ImGui::Text("  SH4 Regfile0");
		ImGui::Text("           R0: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[0]);
		ImGui::Text("           R1: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[1]);
		ImGui::Text("           R2: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[2]);
		ImGui::Text("           R3: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[3]);
		ImGui::Text("           R4: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[4]);
		ImGui::Text("           R5: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[5]);
		ImGui::Text("           R6: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[6]);
		ImGui::Text("           R7: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[7]);
		ImGui::Text("           R8: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[8]);
		ImGui::Text("           R9: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[9]);
		ImGui::Text("          R10: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[10]);
		ImGui::Text("          R11: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[11]);
		ImGui::Text("          R12: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[12]);
		ImGui::Text("          R13: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[13]);
		ImGui::Text("          R14: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[14]);
		ImGui::Text("          R15: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b0[15]);
		ImGui::Separator();
		ImGui::Text("  SH4 Regfile1");
		ImGui::Text("           R0: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[0]);
		ImGui::Text("           R1: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[1]);
		ImGui::Text("           R2: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[2]);
		ImGui::Text("           R3: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[3]);
		ImGui::Text("           R4: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[4]);
		ImGui::Text("           R5: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[5]);
		ImGui::Text("           R6: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[6]);
		ImGui::Text("           R7: 0x%08X", top->rootp->simtop__DOT__core__DOT__rf__DOT__rf_array_b1[7]);
		ImGui::End();

		/*
		ImGui::Begin("   Trace");
		ImGui::Text(" trace_valid0: %d", top->rootp->trace_valid0);
		ImGui::Text("    trace_pc0: 0x%08X", top->rootp->trace_pc0);
		ImGui::Text(" trace_instr0: 0x%04X", top->rootp->trace_instr0);
		ImGui::Text("   trace_wen0: %d", top->rootp->trace_wen0);
		ImGui::Text("  trace_wdst0: 0x%01X", top->rootp->trace_wdst0);
		ImGui::Text(" trace_wdata0: 0x%08X", top->rootp->trace_wdata0);
		ImGui::Separator();
		ImGui::Text(" trace_valid1: %d", top->rootp->trace_valid1);
		ImGui::Text("    trace_pc1: 0x%08X", top->rootp->trace_pc1);
		ImGui::Text(" trace_instr1: 0x%04X", top->rootp->trace_instr1);
		ImGui::Text("   trace_wen1: %d", top->rootp->trace_wen1);
		ImGui::Text("  trace_wdst1: 0x%01X", top->rootp->trace_wdst1);
		ImGui::Text(" trace_wdata1: 0x%08X", top->rootp->trace_wdata1);
		ImGui::Separator();
		
		//ImGui::Text("   calc_state: %d", top->rootp->simtop__DOT__pvr__DOT__calc_state);

		//ImGui::Text("     a_is_nan: %d", top->rootp->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__a_is_nan);
		//ImGui::Text("     b_is_nan: %d", top->rootp->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__b_is_nan);
		//ImGui::Text("    a_is_zero: %d", top->rootp->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__a_is_zero);
		//ImGui::Text("    b_is_zero: %d", top->rootp->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__b_is_zero);
		//ImGui::Text("     a_is_inf: %d", top->rootp->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__a_is_inf);
		//ImGui::Text("     b_is_inf: %d", top->rootp->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__b_is_inf);

		ImGui::Text("         in_e: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__norm1__DOT__in_e);
		ImGui::Text("         in_m: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__norm1__DOT__in_m);
		ImGui::Text("        out_e: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__norm1__DOT__out_e);
		ImGui::Text("        out_m: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__my_fpu_inst__DOT__A1__DOT__norm1__DOT__out_m);

		ImGui::Text("        fpu_a: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__fpu_a, *(float*)&top->rootp->simtop__DOT__pvr__DOT__fpu_a);
		ImGui::Text("        fpu_b: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__fpu_b, *(float*)&top->rootp->simtop__DOT__pvr__DOT__fpu_b);
		ImGui::Text("      fpu_res: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__fpu_res, *(float*)&top->rootp->simtop__DOT__pvr__DOT__fpu_res);
		ImGui::Text("           x1: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__x1, *(float*)&top->rootp->simtop__DOT__pvr__DOT__x1);
		ImGui::Text("           x2: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__x2, *(float*)&top->rootp->simtop__DOT__pvr__DOT__x2);
		ImGui::Text("           x3: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__x3, *(float*)&top->rootp->simtop__DOT__pvr__DOT__x3);
		ImGui::Text("           y1: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__y1, *(float*)&top->rootp->simtop__DOT__pvr__DOT__y1);
		ImGui::Text("           y2: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__y2, *(float*)&top->rootp->simtop__DOT__pvr__DOT__y2);
		ImGui::Text("           y3: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__y3, *(float*)&top->rootp->simtop__DOT__pvr__DOT__y3);
		ImGui::Text("    x1_sub_x3: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__x1_sub_x3, *(float*)&top->rootp->simtop__DOT__pvr__DOT__x1_sub_x3);
		ImGui::Text("    y2_sub_y3: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__y2_sub_y3, *(float*)&top->rootp->simtop__DOT__pvr__DOT__y2_sub_y3);
		ImGui::Text("    y1_sub_y3: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__y1_sub_y3, *(float*)&top->rootp->simtop__DOT__pvr__DOT__y1_sub_y3);
		ImGui::Text("    x2_sub_x3: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__x2_sub_x3, *(float*)&top->rootp->simtop__DOT__pvr__DOT__x2_sub_x3);
		ImGui::Text("x1x3_mul_y2y3: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__x1x3_mul_y2y3, *(float*)&top->rootp->simtop__DOT__pvr__DOT__x1x3_mul_y2y3);
		ImGui::Text("y1y3_mul_x2x3: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__y1y3_mul_x2x3, *(float*)&top->rootp->simtop__DOT__pvr__DOT__y1y3_mul_x2x3);
		ImGui::Text("         area: 0x%08X  %f", top->rootp->simtop__DOT__pvr__DOT__area, *(float*)&top->rootp->simtop__DOT__pvr__DOT__area);
		ImGui::End();
		*/

		ImGui::Begin("PVR Main Regs");
		ImGui::Text("                  ID: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ID); 				// R   Device ID
		ImGui::Text("            REVISION: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__REVISION); 			// R   Revision number
		ImGui::Text("           SOFTRESET: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SOFTRESET); 			// RW  CORE & TA software reset
		ImGui::Text("         STARTRENDER: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__STARTRENDER); 		// RW  Drawing start
		ImGui::Text("              SELECT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TEST_SELECT); 		// RW  Test - writing this register is prohibited.
		ImGui::Text("          PARAM_BASE: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__PARAM_BASE); 		// RW  Base address for ISP regs
		ImGui::Text("         REGION_BASE: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__REGION_BASE); 		// RW  Base address for Region Array
		ImGui::Text("       SPAN_SORT_CFG: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SPAN_SORT_CFG); 		// RW  Span Sorter control
		ImGui::Text("       VO_BORDER_COL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__VO_BORDER_COL); 		// RW  Border area color
		ImGui::Text("           FB_R_CTRL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_R_CTRL); 			// RW  Frame buffer read control
		ImGui::Text("           FB_W_CTRL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_W_CTRL); 			// RW  Frame buffer write control
		ImGui::Text("     FB_W_LINESTRIDE: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_W_LINESTRIDE); 	// RW  Frame buffer line stride
		ImGui::Text("           FB_R_SOF1: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_R_SOF1); 			// RW  Read start address for field - 1/strip - 1
		ImGui::Text("           FB_R_SOF2: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_R_SOF2); 			// RW  Read start address for field - 2/strip - 2
		ImGui::Text("           FB_R_SIZE: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_R_SIZE); 			// RW  Frame buffer XY size	
		ImGui::Text("           FB_W_SOF1: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_W_SOF1); 			// RW  Write start address for field - 1/strip - 1
		ImGui::Text("           FB_W_SOF2: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_W_SOF2); 			// RW  Write start address for field - 2/strip - 2
		ImGui::Text("           FB_X_CLIP: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_X_CLIP); 			// RW  Pixel clip X coordinate
		ImGui::Text("           FB_Y_CLIP: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_Y_CLIP); 			// RW  Pixel clip Y coordinate

		ImGui::Text("      FPU_SHAD_SCALE: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FPU_SHAD_SCALE); 	// RW  Intensity Volume mode
		ImGui::Text("        FPU_CULL_VAL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FPU_CULL_VAL); 		// RW  Comparison value for culling
		ImGui::Text("       FPU_PARAM_CFG: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FPU_PARAM_CFG); 		// RW  register read control
		ImGui::Text("         HALF_OFFSET: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__HALF_OFFSET); 		// RW  Pixel sampling control
		ImGui::Text("        FPU_PERP_VAL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FPU_PERP_VAL); 		// RW  Comparison value for perpendicular polygons
		ImGui::Text("       ISP_BACKGND_D: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ISP_BACKGND_D); 		// RW  Background surface depth
		ImGui::Text("       ISP_BACKGND_T: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ISP_BACKGND_T); 		// RW  Background surface tag

		ImGui::Text("        ISP_FEED_CFG: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ISP_FEED_CFG); 		// RW  Translucent polygon sort mode

		ImGui::Text("       SDRAM_REFRESH: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SDRAM_REFRESH); 		// RW  Texture memory refresh counter
		ImGui::Text("       SDRAM_ARB_CFG: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SDRAM_ARB_CFG); 		// RW  Texture memory arbiter control
		ImGui::Text("           SDRAM_CFG: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SDRAM_CFG); 			// RW  Texture memory control

		ImGui::Text("         FOG_COL_RAM: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FOG_COL_RAM); 		// RW  Color for Look Up table Fog
		ImGui::Text("        FOG_COL_VERT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FOG_COL_VERT); 		// RW  Color for vertex Fog
		ImGui::Text("         FOG_DENSITY: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FOG_DENSITY); 		// RW  Fog scale value
		ImGui::Text("       FOG_CLAMP_MAX: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FOG_CLAMP_MAX); 		// RW  Color clamping maximum value
		ImGui::Text("       FOG_CLAMP_MIN: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FOG_CLAMP_MIN); 		// RW  Color clamping minimum value
		ImGui::Text("     SPG_TRIGGER_POS: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SPG_TRIGGER_POS); 	// RW  External trigger signal HV counter value
		ImGui::Text("      SPG_HBLANK_INT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SPG_HBLANK_INT); 	// RW  H-blank interrupt control	
		ImGui::Text("      SPG_VBLANK_INT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SPG_VBLANK_INT); 	// RW  V-blank interrupt control	
		ImGui::Text("         SPG_CONTROL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SPG_CONTROL); 		// RW  Sync pulse generator control
		ImGui::Text("          SPG_HBLANK: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SPG_HBLANK); 		// RW  H-blank control
		ImGui::Text("            SPG_LOAD: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SPG_LOAD); 			// RW  HV counter load value
		ImGui::Text("          SPG_VBLANK: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SPG_VBLANK); 		// RW  V-blank control
		ImGui::Text("           SPG_WIDTH: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SPG_WIDTH); 			// RW  Sync width control
		ImGui::Text("        TEXT_CONTROL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TEXT_CONTROL); 		// RW  Texturing control
		ImGui::Text("          VO_CONTROL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__VO_CONTROL); 		// RW  Video output control
		ImGui::Text("           VO_STARTX: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__VO_STARTX); 			// RW  Video output start X position
		ImGui::Text("           VO_STARTY: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__VO_STARTY); 			// RW  Video output start Y position
		ImGui::Text("          SCALER_CTL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SCALER_CTL); 		// RW  X & Y scaler control
		ImGui::Text("        PAL_RAM_CTRL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__PAL_RAM_CTRL); 		// RW  Palette RAM control
		ImGui::Text("          SPG_STATUS: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__SPG_STATUS); 		// R   Sync pulse generator status
		ImGui::Text("        FB_BURSTCTRL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_BURSTCTRL); 		// RW  Frame buffer burst control
		ImGui::Text("            FB_C_SOF: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FB_C_SOF); 			// R   Current frame buffer start address
		ImGui::Text("             Y_COEFF: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__Y_COEFF); 			// RW  Y scaling coefficient
		ImGui::Text("        PT_ALPHA_REF: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__PT_ALPHA_REF); 		// RW  Alpha value for Punch Through polygon comparison
		ImGui::End();

		ImGui::Separator();
		ImGui::Begin("TA Regs");
		ImGui::Text("          TA_OL_BASE: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_OL_BASE); 		// RW  Object list write start address
		ImGui::Text("         TA_ISP_BASE: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_ISP_BASE); 		// RW  ISP/TSP register write start address
		ImGui::Text("         TA_OL_LIMIT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_OL_LIMIT); 		// RW  Start address of next Object Pointer Block
		ImGui::Text("        TA_ISP_LIMIT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_ISP_LIMIT); 		// RW  Current ISP/TSP register write address
		ImGui::Text("         TA_NEXT_OPB: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_NEXT_OPB); 		// R   Global Tile clip control
		ImGui::Text("      TA_ISP_CURRENT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_ISP_CURRENT); 	// R   Current ISP/TSP register write address
		ImGui::Text("   TA_GLOB_TILE_CLIP: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_GLOB_TILE_CLIP); 	// RW  Global Tile clip control
		ImGui::Text("       TA_ALLOC_CTRL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_ALLOC_CTRL); 		// RW  Object list control
		ImGui::Text("        TA_LIST_INIT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_LIST_INIT); 		// RW  TA initialization
		ImGui::Text("     TA_YUV_TEX_BASE: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_YUV_TEX_BASE); 	// RW  YUV422 texture write start address
		ImGui::Text("     TA_YUV_TEX_CTRL: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_YUV_TEX_CTRL); 	// RW  YUV converter control
		ImGui::Text("      TA_YUV_TEX_CNT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_YUV_TEX_CNT); 	// R   YUV converter macro block counter value

		ImGui::Text("        TA_LIST_CONT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_LIST_CONT); 		// RW  TA continuation processing
		ImGui::Text("    TA_NEXT_OPB_INIT: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_NEXT_OPB_INIT); 	// RW  Additional OPB starting address

		ImGui::Text("     FOG_TABLE_START: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FOG_TABLE_START); 	// RW  Look-up table Fog data
		ImGui::Text("       FOG_TABLE_END: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FOG_TABLE_END);

		ImGui::Text("TA_OL_POINTERS_START: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_OL_POINTERS_START); // R   TA object List Pointer data
		ImGui::Text("  TA_OL_POINTERS_END: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__TA_OL_POINTERS_END);

		ImGui::Text("   PALETTE_RAM_START: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__PALETTE_RAM_START); 	// RW  Palette RAM
		ImGui::Text("     PALETTE_RAM_END: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__PALETTE_RAM_END);
		ImGui::End();

		ImGui::Begin(" RA Parser");
		ImGui::Text("        ra_state: %d", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_state);
		ImGui::Text("       vram_addr: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__vram_addr);
		ImGui::Text("        vram_din: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__vram_din);
		ImGui::Text("     next_region: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__next_region);
		ImGui::Text("   ol_jump_bytes: %d", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ol_jump_bytes);
		ImGui::Separator();
		ImGui::Text("   FPU_PARAM_CFG: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__FPU_PARAM_CFG);
		ImGui::Text("      ra_control: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_control);
		ImGui::Text("    ra_cont_last: %d", top->rootp->simtop__DOT__pvr__DOT__ra_cont_last);
		ImGui::Text("  ra_cont_zclear: %d", top->rootp->simtop__DOT__pvr__DOT__ra_cont_zclear);
		ImGui::Text("   ra_cont_flush: %d", top->rootp->simtop__DOT__pvr__DOT__ra_cont_flush);
		ImGui::Text("   ra_cont_tiley: %d", top->rootp->simtop__DOT__pvr__DOT__ra_cont_tiley);
		ImGui::Text("   ra_cont_tilex: %d", top->rootp->simtop__DOT__pvr__DOT__ra_cont_tilex);
		ImGui::Separator();
		ImGui::Text("        type_cnt: %d", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__type_cnt);
		ImGui::Text("       ra_opaque: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_opaque);
		ImGui::Text("   ra_opaque_mod: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_opaque_mod);
		ImGui::Text("        ra_trans: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trans);
		ImGui::Text("    ra_trans_mod: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_trans_mod);
		ImGui::Text("       ra_puncht: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__ra_puncht);
		ImGui::Separator();
		uint8_t s_mask = top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__strip_mask;
		ImGui::Text("        opb_word: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_word);

		if ( (top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_word&0x80000000)==0 )               ImGui::Text("  Triangle Strip");
		else if ( (top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_word&0xE0000000)==0x80000000 ) ImGui::Text("  Triangle Array");
		else if ( (top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__opb_word&0xE0000000)==0xA0000000 ) ImGui::Text("      Quad Array");
		else ImGui::Text("   Unknown Prim!");

		ImGui::Text("      strip_mask: 0b%d%d%d%d%d%d", (s_mask&1), (s_mask&2)>>1, (s_mask&4)>>2, (s_mask&8)>>3, (s_mask&16)>>4, (s_mask&32)>>5, (s_mask&64)>>6 );
		ImGui::Text("       num_prims: %d", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__num_prims);
		ImGui::Text("          shadow: %d", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__shadow);
		ImGui::Text("            skip: %d", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__skip);
		ImGui::Text("             eol: %d", top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__eol);
		ImGui::Separator();
		ImGui::Text("  ra_entry_valid: %d", top->rootp->simtop__DOT__pvr__DOT__ra_entry_valid);
		ImGui::Text("       poly_addr: 0x%06X", top->rootp->simtop__DOT__pvr__DOT__poly_addr);	// 24-bit VRAM addr.
		ImGui::Text("     render_poly: %d", top->rootp->simtop__DOT__pvr__DOT__render_poly);
		ImGui::End();

		ImGui::Begin(" ISP Parser");
		ImGui::Text("        isp_state: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_state);
		ImGui::Separator();
		ImGui::Text("        core minx: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__minx);
		ImGui::Text("        core miny: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__miny);
		ImGui::Text("       core spanx: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__spanx);
		ImGui::Text("       core spany: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__spany);
		ImGui::Text("        core x_ps: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__x_ps);
		ImGui::Text("        core y_ps: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__y_ps);
		ImGui::Text("  core inTriangle: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__inTriangle);
		//ImGui::Text("       test float: %f", *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__test_float);
		//ImGui::Text("   test float exp: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__exp);
		//ImGui::Text("   test float man: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__man);
		//ImGui::Text("       core fixed: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__fixed);
		//ImGui::Text(" fixed (as float): %f", (float)top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__fixed / (1<<FRAC_BITS) );
		ImGui::Separator();
		ImGui::Text("        strip_cnt: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__strip_cnt);
		ImGui::Text("        array_cnt: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt);
		ImGui::Text("         isp_inst: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__isp_inst);
		ImGui::Text("         tsp_inst: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tsp_inst);
		ImGui::Text("         tcw_word: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tcw_word);
		ImGui::Text("         tex_addr: 0x%08X", tex_addr);
		ImGui::Text("       texel_offs: 0x%05X", texel_offs);
		//ImGui::Text("   twop_full core: 0x%05X",top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop_full);
		ImGui::Text("        twop core: 0x%05X",top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture_address_inst__DOT__twop);
		//ImGui::Text("     vq_tex_index: 0x%08X",vq_tex_index);
		//ImGui::Text("vram_tex_addr sim (byte): 0x%08X", vram_tex_addr<<3);
		ImGui::Text("vram_tex_addr cor: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vram_tex_addr);
		ImGui::Text("  tex_u_size full: %d", 8<<(top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_u_size&7) );
		ImGui::Text("  tex_v_size full: %d", 8<<(top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__tex_v_size&7) );
		ImGui::Text("          pix_fmt: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt);
		ImGui::SameLine();
		switch (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__pix_fmt) {
			case 0: ImGui::Text("ARGB 1555");	break; // 0  1555 value: 1 bit; RGB values: 5 bits each
			case 7: ImGui::Text("Rsvd / 1555");	break; // 7  Reserved        Regarded as 1555
			case 1: ImGui::Text("RGB 565");		break; // 1  565      R value: 5 bits; G value: 6 bits; B value: 5 bits
			case 2: ImGui::Text("ARGB 4444");	break; // 2  4444 value: 4 bits; RGB values: 4 bits each
			case 3: ImGui::Text("YUV");			break; // 3  YUV422 32 bits per 2 pixels; YUYV values: 8 bits each
			case 4: ImGui::Text("BumpMap");		break; // 4  Bump Map 	16 bits/pixel; S value: 8 bits; R value: 8 bits
			case 5: ImGui::Text("Pal4");		break; // 5  4 BPP Palette   Palette texture with 4 bits/pixel
			case 6: ImGui::Text("Pal8");		break; // 6  8 BPP Palette   Palette texture with 8 bits/pixel
		}

		ImGui::Text("        uv_16b: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit);
		ImGui::SameLine();
		ImGui::Text(" offset: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__offset);
		ImGui::SameLine();
		ImGui::Text(" stride: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride);
		ImGui::Text("          texture: %d  mipmap: %d  vq: %d", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__texture,
												top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__mip_map,
												top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vq_comp);
		ImGui::Text("         vert_a_x: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_x);
		ImGui::Text("         vert_a_y: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_y);
		ImGui::Text("         vert_a_z: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_z);
		ImGui::Text("        vert_a_u0: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u0);
		ImGui::Text("        vert_a_v0: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v0);
		//ImGui::Text("        vert_a_u1: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u1, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_u1);
		//ImGui::Text("        vert_a_v1: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v1, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_v1);
		ImGui::Text("vert_a_base_col_0: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_0);
		//ImGui::Text("vert_a_base_col_1: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_base_col_1);
		ImGui::Text("   vert_a_off_col: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_a_off_col);
		ImGui::Separator();
		ImGui::Text("         vert_b_x: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_x);
		ImGui::Text("         vert_b_y: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_y);
		ImGui::Text("         vert_b_z: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_z);
		ImGui::Text("        vert_b_u0: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u0);
		ImGui::Text("        vert_b_v0: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v0);
		//ImGui::Text("        vert_b_u1: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u1, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_u1);
		//ImGui::Text("        vert_b_v1: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v1, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_v1);
		ImGui::Text("vert_b_base_col_0: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_0);
		//ImGui::Text("vert_b_base_col_1: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_base_col_1);
		ImGui::Text("   vert_b_off_col: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_b_off_col);
		ImGui::Separator();
		ImGui::Text("         vert_c_x: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_x);
		ImGui::Text("         vert_c_y: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_y);
		ImGui::Text("         vert_c_z: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_z);
		ImGui::Text("        vert_c_u0: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u0);
		ImGui::Text("        vert_c_v0: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v0);
		//ImGui::Text("        vert_c_u1: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u1, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_u1);
		//ImGui::Text("        vert_c_v1: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v1, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_v1);
		ImGui::Text("vert_c_base_col_0: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_0);
		//ImGui::Text("vert_c_base_col_1: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_base_col_1);
		ImGui::Text("   vert_c_off_col: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_c_off_col);
		ImGui::Separator();
		ImGui::Text("         vert_d_x: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_x);
		ImGui::Text("         vert_d_y: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_y);
		ImGui::Text("         vert_d_z: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_z, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_z);
		ImGui::Text("        vert_d_u0: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u0);
		ImGui::Text("        vert_d_v0: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v0);
		//ImGui::Text("        vert_d_u1: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u1, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_u1);
		//ImGui::Text("        vert_d_v1: 0x%08X %f", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v1, *(float*)&top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_v1);
		ImGui::Text("vert_d_base_col_0: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_base_col_0);
		//ImGui::Text("vert_d_base_col_1: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_base_col_1);
		ImGui::Text("   vert_d_off_col: 0x%08X", top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__vert_d_off_col);
		ImGui::End();


		// Update the texture for disp_ptr!
		// D3D11_USAGE_DEFAULT MUST be set in the texture description (somewhere above) for this to work.
		// (D3D11_USAGE_DYNAMIC is for use with map / unmap.) ElectronAsh.
		g_pd3dDeviceContext->UpdateSubresource(pTexture, 0, NULL, disp_ptr, width*4, 0);

		// Rendering
		ImGui::Render();
		g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, NULL);
		g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, (float*)&clear_color);
		ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

		//g_pSwapChain->Present(1, 0); // Present with vsync
		g_pSwapChain->Present(0, 0); // Present without vsync

		if (run_enable) for (int step = 0; step < 1024; step++) {	// Simulates MUCH faster if it's done in batches.
			//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__array_cnt>0) {run_enable = 0; break;}
			//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__poly_addr==0x28e50) {run_enable = 0; break;}
			//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__uv_16_bit) {run_enable = 0; break;}
			//if (top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__poly_addr==0x35620) {run_enable = 0; break;}
			//if (top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__poly_addr==0x429224) {run_enable = 0; break;}
			//if (top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__poly_addr==0xB2D0) {run_enable = 0; break;}
			//if (top->rootp->simtop__DOT__pvr__DOT__ra_parser_inst__DOT__poly_addr==0x266cc) {run_enable = 0; break;}
			//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__stride) {run_enable = 0; break; }
			//if (top->rootp->simtop__DOT__pvr__DOT__isp_parser_inst__DOT__shadow) {run_enable = 0; break; }
			if (run_enable) verilate(); else break;
		}
		else {														// But, that will affect the GUI update rate / value fetch.
			bool key_f5 = ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_F5));
			bool key_f11 = ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_F11));
			if (key_f5) run_enable = 1;
			if (key_f11) run_enable = 0;

			if (single_step || key_f11) verilate();
			if (multi_step) for (int step = 0; step < multi_step_amount; step++) verilate();
		}
	}
	// Close imgui stuff properly...
	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	CleanupDeviceD3D();
	DestroyWindow(hwnd);
	UnregisterClass(wc.lpszClassName, wc.hInstance);

	return 0;
}
