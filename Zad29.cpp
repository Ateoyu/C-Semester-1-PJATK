#include "iostream"
using namespace std;

void swapIf2ndLessThan(int *p1, int *p2) {
    if (*p1 > *p2) {
        swap(*p1, *p2);
    }
}

int main() {
    int var1, var2;

    cout << "Enter first value:";
    cin >> var1;
    int * p1 = &var1;
    cout << "Enter second value:";
    cin >> var2;
    int * p2 = &var2;

    if (*p1 > *p2) {
        swapIf2ndLessThan(p1, p2);
        cout << "Values swapped: " << *p1 << " " << *p2;
    }
    else {
        cout << "Values dont need to be swapped.";
    }
}
