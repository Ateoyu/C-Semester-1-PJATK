#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand((unsigned)time(nullptr));

    int p, q, programVersion, winnings;
    char x;

    do {
        cout<<"Which version of the program would you like to run?\nManual Numbers: 0\nRandom Numbers: 1\n";
        cin>>programVersion;

        if(programVersion==0){
            // Manual input
            cout<<"input your numbers of choice between 1-6\nRoll P: ";
            cin>>p;
            cout<<"Roll Q: ";
            cin>>q;

            if(p > 6 || q > 6) {
                cout << "Numbers must be between 1 and 6, please try again.\n\n";
                continue;
            }

            if(p%2==0) {
                switch (q) {
                    case 2:
                    case 4:
                    case 5:
                        winnings = p+3*q;
                        break;

                    default:
                        winnings = 2*q;
                        break;
                }
            }
            else {
                switch (q) {
                    case 1:
                    case 3:
                    case 6:
                        if(p==q) {
                            winnings = 5*p+3;
                            break;
                        }
                        else {
                            winnings = 2*q+p;
                            break;
                        }
                    default:
                        winnings = min(p,q)+4;
                        break;
                }
            }
        }
        else {
            //random input
            p = rand()% 6 + 1;
            q = rand()% 6 + 1;

            cout<<"Roll P = "<<p<<"\n";
            cout<<"Roll Q = "<<q<<"\n";

            if(p%2==0) {
                switch (q) {
                    case 2:
                    case 4:
                    case 5:
                        winnings = p+3*q;
                        break;

                    default:
                        winnings = 2*q;
                        break;
                }
            }
            else {
                switch (q) {
                    case 1:
                    case 3:
                    case 6:
                        if(p==q) {
                            winnings = 5*p+3;
                            break;
                        }
                        else {
                            winnings = 2*q+p;
                            break;
                        }
                    default:
                        winnings = min(p,q)+4;
                        break;
                }
            }
        }
        if(p==5&&q==5) {
            winnings+=5;
        }
        cout<<"Your winnings are: "<<winnings<<endl;

        do {
            cout << "Do you want to play again? (Y/N): ";
            cin >> x;
            if (x == 'Y' || x == 'y') {
                system("cls");
            }
        } while (x != 'Y' && x != 'y' && x != 'N' && x != 'n');
    } while (x == 'Y' || x == 'y');

    return 0;
}