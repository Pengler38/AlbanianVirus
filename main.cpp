
#include <windows.h>


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    const char* message = "Hi, I am an Albanian virus but because of "
    "poor technology in my country unfortunately I am not able to harm"
    " your computer. Please be so kind to delete one of your important "
    "files yourself and then forward me to other users. Many thanks for "
    "your cooperation! Best regards,Albanian virus";

    MessageBox(NULL, message, "Virus Alert !", MB_ICONERROR | MB_OK );

    return 0;
}
