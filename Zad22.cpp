//Bubble Sort Algorithm of an Array
#include <iostream>
using namespace std;

int main() {
    int arrayLength, change = 1;

    cout << "How big is your array? : ";
    cin >> arrayLength;

    int arr[arrayLength];

    for(int i = 0; i < arrayLength; i++) {
        cout << i << ": ";
        cin >> arr[i];
    }
    for(int i = 0; i < arrayLength; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    while(change != 0) {
        change = 0;
        for(int i = 0; i < arrayLength - 1; i++) {
            if(arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
                change++;
            }
        }
    }
    for(int z = 0; z < arrayLength; z++) {
        cout << arr[z] << " ";
    }
}