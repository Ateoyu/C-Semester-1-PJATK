#include "iostream"
using namespace std;

int isSorted(const int *arr, const int &size, const char &ascOrDesc) {
    if (ascOrDesc == 'a') {
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] > arr[i + 1]) {
                cout << "Array is not sorted!\n";
                cout << "STDOUT = ";
                return 0;
            }
        }
        cout << "Array is sorted!\n";
        cout << "STDOUT =";
        return 1;
    }
    else if (ascOrDesc == 'd') {
        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] < arr[i + 1]) {
                cout << "Array is not sorted!\n";
                cout << "STDOUT = ";
                return 0;
            }
        }
        cout << "Array is sorted!\n";
        cout << "STDOUT = ";
        return 1;
    }
    else {
        cout << "Invalid input!\n";
        cout << "STDOUT = ";
        return -1;
    }
}

int main() {
    int size;
    cout << "Enter size of array:";
    cin >> size;
    const auto arr = new int[size];

    cout << "Enter elements of array:";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    char ascOrDesc;
    cout << "Enter 'a' for ascending or 'd' for descending:";
    cin >> ascOrDesc;

    cout << isSorted(arr, size, ascOrDesc);

    delete[] arr;
}