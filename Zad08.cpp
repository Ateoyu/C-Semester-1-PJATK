#include "iostream"
using namespace std;

int main() {
    int num1, num2;
    int operation;

    while (operation != 0) {
        cout << "What operation would you like to perform?\n[1-Add] [2-Subtract] [3-Multiply] [4-Divide]\n[0-EXIT]\n";
        cin >> operation;

        if (operation==0) {
            exit(1);
        }

        cout << "Enter numbers you want to work on:";
        cin >> num1 >> num2;

        switch (operation) {
            case 1:
                cout << num1+num2 << endl;
            break;
            case 2:
                cout << num1-num2<< endl;
            break;
            case 3:
                cout << num1*num2<< endl;
            break;
            case 4:
                cout << num1/num2<< endl;
            break;
            default:
                cout << "Please select valid operation."<< endl;
        }
    }
}