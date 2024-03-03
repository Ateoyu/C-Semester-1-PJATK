#include <ncurses.h>
#include <iostream>
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
    Project(): size(0),
               symbol(0),
               posX(0),
               posY(0),
               columns(0),
               rows(0) {
    }

    void getConsoleSize() {
        int columns, rows;
        getmaxyx(stdscr, columns, rows);
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
                if (width == 0 || width == size * 2 - 1 || (
                        height < size / 2.0 && (width == height * 2 + 1 || width == size * 2 - height * 2 - 2))) {
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
        nodelay(stdscr, TRUE);
        keypad(stdscr, TRUE);
        while (true) {
            int input = getch();
            switch (input) {
                case KEY_UP:
                    if (posY > 0) {
                        return posY--;
                    }
                    break;
                case KEY_DOWN:
                    if (posY + size < rows - 2) {
                        return posY++;
                    }
                    break;
                case KEY_RIGHT:
                    if (posX + (size * 2) < columns) {
                        return posX++;
                    }
                    break;
                case KEY_LEFT:
                    if (posX > 0) {
                        return posX--;
                    }
                    break;
                case '+':
                    if (size * 2 < columns - 1 - posX && size < rows - posY - 2) {
                        return size++;
                    };
                    break;
                case '-':
                    if (size > 3) {
                        return size--;
                    }
                    break;
            }
        }
    }
};

int main() {
    initscr();
    noecho();
    curs_set(0);
    const int exit = getch();

    Project object;
    object.sizeAndSymbol();
    object.getConsoleSize();
    object.starterPosition();

    while (exit != 'q') {
        system("cls");
        cout << "Press [+] or [-] to change the size.    Press [<][>][^][v] to move.    Press [Esc] to quit.\n";
        object.getConsoleSize();
        object.drawShape();
        object.moveAndResize();

        napms(50);
    }
}
