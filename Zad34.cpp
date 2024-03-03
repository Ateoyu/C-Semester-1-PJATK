#include "iostream"
#include "algorithm"
using namespace std;

string decToN(int *num, const int &base) {
    string result;
    if (*num <= 0 || base <= 1) {
        result += "Error";
    }
    while (*num != 0 && base > 1) {
        const int remainder = *num % base;
        if (remainder < 10 && remainder > 0) {
            result += static_cast<char>(remainder + 48);
        }
        else if (remainder >= 10) {
            result += static_cast<char>(remainder + 55);
        }
        *num /= base;
    }
    ranges::reverse(result);
    return result;
}
int main() {
    int num, base;

    cout << "Enter number you want to convert:";
    cin >> num;

    cout << "Enter the number system base you want to convert to:";
    cin >> base;

    cout << num << " converted to base " << base << ": " << decToN(&num, base);
}