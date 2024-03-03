#include "iostream"
using namespace std;

void quickSort(int *arr, const int low, const int high) {
    if (low < high) {
        const int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; ++j) {
            if (arr[j] < pivot) {
                ++i;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);

        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

void checkSame(int *arr, const int size) {
    quickSort(arr, 0, 5);
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            arr[i] = rand() % 49 + 1;
            checkSame(arr, size);
        }
    }
}

int main() {
    srand(time(nullptr));

    int arr[6];

    cout << "Unsorted: ";
    for (int & i : arr) {
        i = rand() % 49 + 1;
        cout << i << " ";
    }

    cout << "\nLotto result: ";
    checkSame(arr, 6);
    for (const int i : arr) {
        cout << i << " ";
    }
}