#include "iostream"
using namespace std;

int main() {
    srand(time(nullptr));

    cout << "Enter the number of dice rolls:";
    int rolls;
    cin >> rolls;
    int arr[rolls];

    cout << "Dice rolls:\n";
    for (int i = 0; i < rolls; ++i) {
        arr[i] = rand()% 6 + 1;
        cout << arr[i] << " ";
    }
}