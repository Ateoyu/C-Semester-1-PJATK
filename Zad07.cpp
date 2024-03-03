#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int LCM;

    cout << "Enter the 2 numbers you need: ";
    cin >> a >> b;

    if(a>0 && b>0) {
        auto a1 = a;
        auto b1 = b;

        while (a1 != b1) {

            if (a1 > b1)
            {b1 = b1 + b;}

            else
            {a1 = a1 + a;}
        }
        LCM = a1;
        cout << "LCM is: " << LCM;
    }
    else{cout << "LCM is: 0";}

    return 0;
}