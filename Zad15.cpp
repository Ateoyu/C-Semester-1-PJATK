#include "iostream"
using namespace std;

int main() {
    int num;
    char sign;

    cout << "Enter how wide you want the triangle:";
    cin >> num;
    cout << "Enter sign you want the triangle to be:";
    cin >> sign;

    for (int i = num; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << sign<< " ";
        }
        cout << "\n";
        for (int k = i; k <= num; k++) {
            cout << " ";
        }
    }
}