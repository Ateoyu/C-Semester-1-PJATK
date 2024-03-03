#include <iostream>
using namespace std;

class Testing {
public:
    Testing(): num1(0), num2(0) {}
    int sum();

private:
    int num1;
    int num2;
};

int Testing::sum() {
    cout << "Enter first num:";
    cin >> num1;
    cout << "Enter second num:";
    cin >> num2;
    cout << "Sum of " << num1 << "+" << num2 << ": ";
    return num1 + num2;
}

int main() {
    Testing something;
    cout << something.sum();
}