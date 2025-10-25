#include <windows.h>
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "Please input an integer for the proof:\n";
    int number = 0;
    string input;
    cin >> input;
    number = stoi(input);
    cout << "Given any two numbers p and q which satisfy the following conditions,";
    cout << "\np \u2208 \u2124";
    cout << "\nq \u2208 \u211D";
    cout << "\np > q";
    cout << "\nThere exists some number n such that";
    cout << "\nn = " << number;

    Sleep(2500);

    const char* videoPath = "Rick_Astley_Never_Gonna_Give_You_Up.mp4";
    ShellExecuteA(NULL, "open", videoPath, NULL, NULL, SW_SHOW);
    HWND consoleWindow = GetConsoleWindow();
    ShowWindow(consoleWindow, SW_MINIMIZE);
    return 0;
}