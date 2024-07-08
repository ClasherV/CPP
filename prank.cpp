#define UNICODE
#define _UNICODE

#include <windows.h>
#include <mmsystem.h> // For multimedia functions

// Global variables to store the window handles
HWND g_hwnd;
HWND g_prankWnd;

// Function to play a continuous beep sound
void PlayContinuousBeepSound() {
    PlaySound(L"beep.wav", NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

// Function to stop the continuous beep sound
void StopContinuousBeepSound() {
    PlaySound(NULL, NULL, 0); // Stop playing any sound
}

// Function to create and display the fake hacking window
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_CREATE:
        PlayContinuousBeepSound(); // Start playing continuous beep sound
        SetTimer(hwnd, 1, 10000, NULL); // Set a timer for 10 seconds
        break;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        // Create a scary visual effect with blurred text and colorful background
        HBRUSH hBrush = CreateSolidBrush(RGB(0, 0, 0)); // Black background
        FillRect(hdc, &ps.rcPaint, hBrush);

        SetTextColor(hdc, RGB(255, 0, 0)); // Red text color
        SetBkMode(hdc, TRANSPARENT);

        // Use a slightly smaller font size for scary effect
        HFONT hFont = CreateFont(28, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
            CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, VARIABLE_PITCH, TEXT("Arial"));
        HFONT hOldFont = (HFONT)SelectObject(hdc, hFont);

        // Display scary message in the center of the screen
        RECT rect;
        GetClientRect(hwnd, &rect);
        DrawText(hdc, L"Your system has been hacked by ClasherV05!\nYour files are being encrypted.",
            -1, &rect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

        SelectObject(hdc, hOldFont);
        DeleteObject(hFont);
        DeleteObject(hBrush);

        EndPaint(hwnd, &ps);
        break;
    }
    case WM_CLOSE:
        return 0; // Prevent closing during the timer period
    case WM_DESTROY:
        StopContinuousBeepSound(); // Stop continuous beep sound when window is closed
        PostQuitMessage(0);
        return 0;
    case WM_TIMER:
        KillTimer(hwnd, 1); // Stop the timer after 10 seconds
        SetWindowLong(hwnd, GWL_STYLE, GetWindowLong(hwnd, GWL_STYLE) & ~(WS_MINIMIZEBOX | WS_SYSMENU)); // Remove minimize and system menu
        // Create prank reveal window after 10 seconds
        g_prankWnd = CreateWindowEx(
            0,
            L"PrankRevealWindow",
            L"Prank Revealed",
            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
            CW_USEDEFAULT, CW_USEDEFAULT, 400, 200, // Specify size for the prank reveal window
            NULL,
            NULL,
            GetModuleHandle(NULL),
            NULL
        );

        // Center the prank reveal window on screen
        RECT rc;
        GetWindowRect(g_prankWnd, &rc);
        int xPos = (GetSystemMetrics(SM_CXSCREEN) - rc.right) / 2;
        int yPos = (GetSystemMetrics(SM_CYSCREEN) - rc.bottom) / 2;
        SetWindowPos(g_prankWnd, NULL, xPos, yPos, 0, 0, SWP_NOSIZE | SWP_NOZORDER);

        return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

LRESULT CALLBACK PrankWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_CREATE: {
        // Center the window on screen
        RECT rc;
        GetWindowRect(hwnd, &rc);
        int xPos = (GetSystemMetrics(SM_CXSCREEN) - rc.right) / 2;
        int yPos = (GetSystemMetrics(SM_CYSCREEN) - rc.bottom) / 2;
        SetWindowPos(hwnd, NULL, xPos, yPos, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
        break;
    }
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        // Create a scary visual effect with black background and yellow text
        HBRUSH hBrush = CreateSolidBrush(RGB(0, 0, 0)); // Black background
        FillRect(hdc, &ps.rcPaint, hBrush);

        // Use a medium font size for attractive message
        HFONT hFont = CreateFont(24, 0, 0, 0, FW_NORMAL, FALSE, FALSE, FALSE, DEFAULT_CHARSET, OUT_OUTLINE_PRECIS,
            CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, VARIABLE_PITCH, TEXT("Times New Roman"));
        HFONT hOldFont = (HFONT)SelectObject(hdc, hFont);

        // Display message with yellow text in the center of the window
        SetTextColor(hdc, RGB(255, 255, 0)); // Yellow text color
        SetBkMode(hdc, TRANSPARENT);
        RECT rect;
        GetClientRect(hwnd, &rect);
        DrawText(hdc, L"Anjali kaisa laga mazaak?", -1, &rect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

        SelectObject(hdc, hOldFont);
        DeleteObject(hFont);
        DeleteObject(hBrush);

        EndPaint(hwnd, &ps);
        break;
    }
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void ShowFakeHackingWindow() {
    const wchar_t CLASS_NAME[] = L"FakeHackingWindow";
    const wchar_t PRANK_CLASS_NAME[] = L"PrankRevealWindow";

    // Register class for fake hacking window
    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = GetModuleHandle(NULL);
    wc.lpszClassName = CLASS_NAME;
    wc.hbrBackground = (HBRUSH)(CreateSolidBrush(RGB(0, 0, 0))); // Black background
    RegisterClass(&wc);

    // Register class for prank reveal window
    WNDCLASS wcPrank = {};
    wcPrank.lpfnWndProc = PrankWindowProc;
    wcPrank.hInstance = GetModuleHandle(NULL);
    wcPrank.lpszClassName = PRANK_CLASS_NAME;
    wcPrank.hbrBackground = (HBRUSH)(CreateSolidBrush(RGB(0, 0, 0))); // Black background
    RegisterClass(&wcPrank);

    // Create fake hacking window
    g_hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        L"Hacked",
        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
        NULL,
        NULL,
        GetModuleHandle(NULL),
        NULL
    );

    // Prevent the fake hacking window from being minimized or closed
    SetWindowLong(g_hwnd, GWL_STYLE, GetWindowLong(g_hwnd, GWL_STYLE) & ~(WS_MINIMIZEBOX | WS_SYSMENU));

    // Run the message loop
    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

int main() {
    // Show fake hacking window
    ShowFakeHackingWindow();

    // Clean up resources and exit
    UnregisterClass(L"FakeHackingWindow", GetModuleHandle(NULL));
    UnregisterClass(L"PrankRevealWindow", GetModuleHandle(NULL));

    return 0;
}
