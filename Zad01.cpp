#include <iostream>
using namespace std;

int main() {
    int sweets;
    int classmates;

    cout << "How many sweets do you have?:";
    cin >> sweets;
    cout << "How many classmates are there?:";
    cin >> classmates;

    const int sweets_per_classmate = sweets / (classmates - 1);

    /* The % modulo operator will give you the remainder after division.
    This remainder can be 0 or non-zero.
    In the code, we are checking if the remainder is greater than 0. */

    if (const int leftover = sweets % (classmates - 1); leftover > 0) {
        cout << "Sweets per classmate: " << sweets_per_classmate << endl;
        cout << "Leftover: " << leftover << endl;
    }
    else {
        cout << "Sweets per classmate: " << sweets_per_classmate << " and no leftovers for Jas" << endl;
    }
    return 0;
}