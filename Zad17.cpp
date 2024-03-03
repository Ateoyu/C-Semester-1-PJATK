#include "iostream"
using namespace  std;

int main() {
    int width,height;
    char sign;

    cout << "Enter your width and height: ";
    cin >> width >> height;

    cout << "Enter your sign:";
    cin >> sign;

    for (int i = 0; i < height; ++i) {
        cout << "\n";
        for (int j = 0; j < width ; ++j) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                cout << sign << " ";
            else {
                cout << "  ";
            }
        }

    }
}