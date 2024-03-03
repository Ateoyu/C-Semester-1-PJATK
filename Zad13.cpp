#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, p, p1;
    char choice;

    do {
        system("cls");
        cout << "Enter a positive integer: ";
        cin >> n;

        int sum = 0;
        p = static_cast<int>(floor(sqrt(n)));

        while (p > 1) {
            if (n % p == 0) {
                sum += p;
                p1 = n / p;
                if (p1 != p) {
                    sum += p1;
                }
            }
            p = p - 1;
        }
        sum = sum + 1;
        if (sum == n) {
            cout << n << " IS a perfect number.\n";
        }
        else {
            cout << n << " is NOT a perfect number.\n";
        }
        cout << "Do you want to play again? (Y/N): ";
        cin >> choice;
    }
    while (choice == 'y' || choice == 'Y');
    return 0;
}