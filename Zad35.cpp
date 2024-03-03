#include "iostream"
#include "windows.h"
using namespace std;

void changeSize(int *size) {
    while (true){
        if (GetAsyncKeyState(VK_OEM_PLUS) & 0x8001) {
            *size += 1;
            break;
        }
        if (GetAsyncKeyState(VK_OEM_MINUS) & 0x8001) {
            *size -= 1;
            break;
        }
    }
}

void draw(const int &size, char character) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j <= i; j++) {
            cout << " ";
        }
        cout << character << "\n";
    }
    for (int i = size; i > 0; --i) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << character << "\n";
    }
}

int main() {
    int size;

    cout << "Enter the size of the drawing:";
    cin >> size;
    cout << "Enter the character you want the drawing to be made of:";
    char character;
    cin >> character;


    while (true) {
        system("cls");
        cout << "\nPress + or - to change the size of the drawing\n";
        draw(size, character);
        Sleep(75);
        changeSize(&size);
    }
}