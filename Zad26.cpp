#include "iostream"
#include "chrono"
using namespace std;

void arrPlus50(long arr[], long size) {
    for (long i = 0; i < size; ++i) {
        arr[i] = i;
        arr[i] = arr[i] + 50;
    }
}

void arrPlus50p(long *arr, long size) {
    for (int i = 0; i < size; ++i) {
        *(arr + i) = i;
        *(arr + i) = i + 50;
    }
}

int main() {
    long size;

    cout << "Enter the size of the array:";
    cin >> size;
    auto* arr = new long[size];

    const auto start = chrono::steady_clock::now();
    arrPlus50(arr, size);
    const auto end = chrono::steady_clock::now();

    const chrono::duration<double> duration = end - start;
    cout << "Execution time without pointers: " << duration.count() << " seconds." << endl;

    delete[] arr;

    auto *arrayPointers = new long[size];

    const auto start2 = chrono::steady_clock::now();
    arrPlus50p(arrayPointers, size);
    const auto end2 = chrono::steady_clock::now();

    const chrono::duration<double> duration2 = end2 - start2;
    cout << "Execution time with pointers:" << duration2.count() << " seconds." << endl;

    delete[] arrayPointers;
}