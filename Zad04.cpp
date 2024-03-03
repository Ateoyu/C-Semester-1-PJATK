#include <iostream>
using namespace std;

int main() {

    unsigned char input;

    cout << "Enter a number, letter, or character: ";
    cin >> input;

    const int ascii = input;

    cout << "ASCII: " << ascii;

    return 0;
}