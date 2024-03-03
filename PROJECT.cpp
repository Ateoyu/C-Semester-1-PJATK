#include <iostream>
#include <windows.h>
using namespace std;

class Project {
private:
    int size;
    char symbol;
    int posX;
    int posY;
    int columns;
    int rows;

public:
    Project():
    size(0),
    symbol(0),
    posX(0),
    posY(0),
    columns(0),
    rows(0)
    {}

    void getConsoleSize() {
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
        columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    }

    static void hideCursor() {
        CONSOLE_CURSOR_INFO info;
        info.dwSize = 100;
        info.bVisible = false;
        SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    }


    int starterPosition() {
        posX = columns - size * 2;
        return posX;
    }

    void sizeAndSymbol() {
        cout << "Enter symbol of the shape:";
        cin >> symbol;
        cout << "Enter initial size of the shape:";
        cin >> size;
    }

    void drawShape() const {
        // Add spaced across until the same length as the shape width and then add/remove a new line per down/up arrow press.
        for (int moveVertical = 0; moveVertical < posY; ++moveVertical) {
            for (int width = 0; width < posX; ++width) {
                cout << " ";
            }
            cout << '\n';
        }
        // Add spaces until same length as shape height and then add/remove a new space per right/left arrow press.
        for (int height = 0; height < size; ++height) {
            for (int moveHorizontal = 0; moveHorizontal < posX; ++moveHorizontal) {
                cout << " ";
            }
            // Draw the shape.
            for (int width = 0; width < size * 2; ++width) {
                if (width == 0 || width == size * 2 - 1 ||(height < size / 2.0 && (width == height * 2 + 1 || width == size * 2 - height * 2 - 2))) {
                    cout << symbol;
                    }
                else {
                    cout << " ";
                }
            }
            cout << '\n';
        }
    }

    int moveAndResize() {
        while (true) {
            if (GetAsyncKeyState(VK_OEM_PLUS) & 0x8001) {
                    if (size * 2 < columns - 1 - posX && size < rows - posY - 2) {
                        return size++;
                    }
                }
            if (GetAsyncKeyState(VK_OEM_MINUS) & 0x8001) {
                if (size > 3) {
                    return size--;
                }
            }
            if (GetAsyncKeyState(VK_LEFT) & 0x8001) {
                if (posX > 0) {
                    return posX--;
                }
            }
            if (GetAsyncKeyState(VK_RIGHT) & 0x8001) {
                if (posX + (size * 2) < columns) {
                    return posX++;
                }
            }
            if (GetAsyncKeyState(VK_UP) & 0x8001) {
                if (posY > 0) {
                    return posY--;
                }
            }
            if (GetAsyncKeyState(VK_DOWN) & 0x8001) {
                if (posY + size < rows - 2) {
                    return posY++;
                }
            }
        }
    }
};

int main() {
    Project object;
    object.sizeAndSymbol();
    object.getConsoleSize();
    object.starterPosition();
    Project::hideCursor();

    while (!(GetAsyncKeyState(VK_ESCAPE) & 0x8001)) {
        system("cls");
        cout << "Press [+] or [-] to change the size.    Press [<][>][^][v] to move.    Press [Esc] to quit.\n";
        object.getConsoleSize();
        object.drawShape();
        object.moveAndResize();

        Sleep(50);
    }
}