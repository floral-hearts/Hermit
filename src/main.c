#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow) {
    HWND stage;
    WNDCLASS stageCls;

    stageCls.style = CS_HREDRAW | CS_VREDRAW;
    stageCls.lpfnWndProc = DefWindowProc;
    stageCls.cbClsExtra = 0;
    stageCls.cbWndExtra = 0;
    stageCls.hInstance = hInstance;
    stageCls.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    stageCls.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    stageCls.lpszMenuName = NULL;
    stageCls.lpszzClassName = TEXT("stageCla");
    if(!RegisterClass(&stageCls)) {
        MessageBox(NULL, "error", "RegisterClass(&stageCls)", MB_OK);
        return 1;
    }

    stage = CreateWindow(
        TEXT("stageCls"),
        TEXT("stage"),
        WS_OVERLAPPEDWINDOW,
        100, 100, 200, 200,
        NULL,
        NULL,
        hInstance,
        NULL
    );
    if(!stage) {
        MessageBox(NULL, "error", "stage = CreateWindow(...)", MB_OK);
        return 1;
    }
    ShowWindow(stage, SW_SHOW);

    return 0;
}
