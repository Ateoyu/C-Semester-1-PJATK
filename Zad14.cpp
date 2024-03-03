//Prime Number in Range identifier
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int UpperLimit) {
    if(UpperLimit < 2) {
        return false;
    }
    if(UpperLimit == 2 || UpperLimit == 3) {
        return true;
    }
    if(UpperLimit % 2 == 0 || UpperLimit % 3 == 0) {
        return false;
    }
    int squareRootOfUpperLimit = sqrt(UpperLimit);
    for(int divisor = 5; divisor <= squareRootOfUpperLimit; divisor += 2) {
        if(UpperLimit % divisor == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int UpperLimit;
    char choice;

    do {
        system("cls");
        do {
            cout << "Enter the upper limit of the range you want to test for: ";
            cin >> UpperLimit;
            if(UpperLimit <= 1) {
                cout << "Input is less than or equal to 1, please try again.\n";
            }
        } while(UpperLimit <= 1);
        for(int divisor = 2; divisor <= UpperLimit; divisor++) {
            if(isPrime(divisor)) {
                cout << divisor << " is a prime number.\n";
            }
        }

        cout << "Do you want to repeat the program? (Y/N): ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    return 0;
}
//
// Created by Marcel on 05/11/2023.
//