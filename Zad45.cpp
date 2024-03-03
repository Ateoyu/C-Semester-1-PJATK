#include <iostream>
using namespace std;

class Testing {
public:
    Testing(): randNum(10), num1(0), num2(0) {}
    int randNum;
    int sum();
    int sum(int randNum);

private:
    int num1;
    int num2;
};

int Testing::sum() {
    cout << "Enter first num:";
    cin >> num1;
    cout << "Enter second num:";
    cin >> num2;
    cout << "Sum of " << num1 << "+" << num2 << "= ";
    return num1 + num2;
}

int Testing::sum(const int randNum) {
    cout << "Enter first num:";
    cin >> num1;
    cout << "Enter second num:";
    cin >> num2;
    cout << "Sum of " << num1 << "+" << num2 << "+" << randNum << "= ";
    return num1 + num2 + randNum;
}

int main() {
    Testing something;
    cout << "Sum before overloading\n" << something.sum();
    cout << "\nSum after overloading\n" << something.sum(something.randNum) << endl;
}