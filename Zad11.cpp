#include <iostream>
using namespace std;

double calculateTaxRate(double gross) {
    if(gross <= 700) {
        return 0.15;
    } else if (gross <= 1200) {
        return 0.2;
    } else {
        return 0.25;
    }
}

int main() {

    char choice = 'y';

    while(choice == 'y') {

        char grade;
        int hours;
        double rate, gross, tax, net;

        cout << "Enter grade: A - B - C - D:\n";
        cin >> grade;

        switch(grade) {
            case 'A':
                rate = 15;
                break;
            case 'B':
                rate = 25;
                break;
            case 'C':
                rate = 30;
                break;
            case 'D':
                rate = 35;
                break;
            default:
                cout<<"Invalid grade.";
        }

        cout << "Enter hours worked: ";
        cin >> hours;

        if(hours < 40) {
            gross = hours * rate;
        } else {
            gross = 40 * rate + (hours - 40) * rate * 2;
        }

        tax = gross * calculateTaxRate(gross);
        net = gross - tax;

        cout << "Gross: " << gross << "zl" << endl;
        cout << "Tax: " << tax << "zl" << endl;
        cout << "Net: " << net << "zl" << endl;

        cout << "Calculate again (y/n)?\n";
        cin >> choice;
    }

    return 0;
}