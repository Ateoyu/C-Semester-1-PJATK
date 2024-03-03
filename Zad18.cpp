#include <iostream>

using namespace std;

int euclidGame(int a, int b) {
    while (a != b) {
        if (a < b) {
            b -= a;
        } else {
            a -= b;
        }
    }
    return a;
}

int main() {

    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "Remaining chips: " << euclidGame(a, b) << endl;

    return 0;
}