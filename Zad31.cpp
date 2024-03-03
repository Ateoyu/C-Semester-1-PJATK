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

int main() {
    srand(time(nullptr));
    int size;

    cout << "Enter the size of the array:";
    cin >> size;
    const auto arr = new int [size];

    cout << "\nGenerated array:\n";
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }

    quickSort(arr, 0, size - 1);

    cout << "\nSorted array:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    delete[] arr;
}