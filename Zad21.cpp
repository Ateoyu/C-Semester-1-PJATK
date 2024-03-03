#include <iostream>

using namespace std;

int main() {

    int upperLimit, a = 0, b = 1, c;

    cout << "Enter the upper limit of the Fibonacci sequence: ";
    cin >> upperLimit;

    for(int i = 2; a <= upperLimit; ++i) {

        cout << a << " ";
        c = a;
        a = b;
        b = b + c;
    }
    return 0;
}