#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int GCD;

    cout<<"Enter the 2 numbers you need: \n";
    cin>>a>>b;

    if(a>0 && b>0) {
        auto a1 = a;
        auto b1 = b;

        while (a1 != b1) {

            if (a1 > b1)
            {a1 = a1 - b1;}

            else
            {b1 = b1 - a1;}
        }
        GCD = a1;
        cout << "GCD is: " << GCD;
    }
    else{cout << "GCD is: No answer";}

    return 0;
}