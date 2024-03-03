#include "iostream"
using namespace std;

enum days{monday, tuesday, wednesday, thursday, friday, saturday, sunday};

int daysLeft(days day) {
    switch (day) {
        case monday: return 6;
        case tuesday: return 5;
        case wednesday: return 4;
        case thursday: return 3;
        case friday: return 2;
        case saturday: return 1;
        case sunday: return 0;
        default: return -1;
    }
}

int main() {
    days day;
    string input;
    cout << "Enter day you want to check until end of the week:\n";
    cout << "[monday][tuesday][wednesday][thursday][friday][saturday][sunday]:";
    cin >> input;

    if (input == "monday") {
        day = monday;
    }
    else if (input == "tuesday") {
        day = tuesday;
    }
    else if (input == "wednesday") {
        day = wednesday;
    }
    else if (input == "thursday") {
        day = thursday;
    }
    else if (input == "friday") {
        day = friday;
    }
    else if (input == "saturday") {
        day = saturday;
    }
    else if (input == "sunday") {
        day = sunday;
    }
    else {
        cout << "Invalid input. Please enter a valid day of the week.\n";
        return 0;
    }

    cout << "Days until Sunday: " << daysLeft(day) << endl;
}
