#include "iostream"
using namespace std;

int checkPassword(const string &password) {
    bool lengthCheck = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    if (password.length() >= 8) {
        lengthCheck = true;
    }
    for (int i = 0; i < password.length(); ++i) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUpper = true;
        }
        if (password[i] >= '0' && password[i] <= '9') {
            hasDigit = true;
        }
        if (password[i] >= '!' && password[i] <= '/') {
            hasSpecial = true;
        }
    }
    if (lengthCheck && hasUpper && hasDigit && hasSpecial) {
        return 1;
    }
    return 0;
}

int main() {
    string password;

    do {
        cout << "Enter password:";
        cin >> password;
        if (checkPassword(password) == 1) {
            cout << "Password is valid." << endl;
            break;
        }
        else {
            cout << "Password is invalid." << endl;
        }
    }
    while (checkPassword(password) == 0);
}