#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter number:";
    cin >> num;

    if (num % 3 == 0)
        cout << "Pling";

    if (num % 5 == 0)
        cout << "Plang";

    if (num % 7 == 0)
        cout << "Plong";

    return 0;
}