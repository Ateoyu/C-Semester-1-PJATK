#include "iostream"
using namespace std;

int main() {
    int size, rangeOfRand, sum = 0;

    cout << "Enter the size of the array:";
    cin >> size;
    int arr[size];

    cout << "Enter the range of random values to fill the array:";
    cin >> rangeOfRand;

    srand(time(nullptr));

    for (int i = 0; i < size; ++i) {
        arr[i] = rand()%rangeOfRand;
    }

    cout << "The generated array:\n";
    for (const int i:arr) {
        cout << i << " ";
    }

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    cout << "\nThe sum of the generated array: " << sum;
}