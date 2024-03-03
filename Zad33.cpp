#include "iostream"
using namespace std;

auto iota(int *arr, const int &size, const int &startNum) -> void {
    for (int i = 0; i < size; ++i) {
        arr[i] = startNum + i;
    }
}

int main() {
    int size, startNum;
    cout << "Enter size of array:";
    cin >> size;
    const auto arr = new int[size];
    cout << "Enter starting number to fill array with:";
    cin >> startNum;

    iota(arr, size, startNum);
    cout << "Array filled with numbers from " << startNum << " to " << startNum + size - 1 << ":\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    delete[] arr;
}