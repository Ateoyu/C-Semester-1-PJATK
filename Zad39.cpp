#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int findEq(const string &line01, const int length) {
    for (int i = 0; i < length; ++i) {
        if (line01[i] == '=') {
            return i;
        }
    }
    return -1;
}
string getSymbol(const string &line01, const int length) {
    int eqIndex = findEq(line01, length);
    if (eqIndex != -1) {
        return line01.substr(eqIndex + 1);
    }
    return "Error";
}
int getAmount(const string &line01, const int length) {
    int eqIndex = findEq(line01, length);
    if (eqIndex != -1) {
        return stoi(line01.substr(eqIndex + 1));
    }
    return -1;
}

int main() {
    ifstream myFile("39.txt");
     if (!myFile.is_open()) {
        cout << "Failed to open the file" << endl;
        return 1;
    }
    string line01;

    getline(myFile, line01);
    const int length = sizeof(line01.c_str());
    string symbol = getSymbol(line01, length);
    getline(myFile, line01);
    int symbolAmount = getAmount(line01, length);

    int counter = 0;
    for (int i = 0; i < symbolAmount; ++i) {

        counter++;
        cout << symbol;
    }
    cout << "\n" << counter << endl;
}
