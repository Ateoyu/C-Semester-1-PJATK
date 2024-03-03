#include "iostream"
using namespace std;

double arithmeticMean(const int *arr, const int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    cout << "\nArithmetic mean of array: " << sum/size << "\n\n";
    return 1;
}
int occurrenceOfElement(const int *arr, const int size) {
    int occurrenceInArray, count=0;
    cout << "Enter number you want to check the occurrences of:";
    cin >> occurrenceInArray;

    for (int i = 0; i < size; ++i) {
        if (occurrenceInArray == arr[i]) {
            count++;
        }
    }
    cout << "Occurrences of " << occurrenceInArray << ": " << count;

    return 2;
}
int sumOfOdd(const int *arr, const int size) {
    int sumOfOdd = 0, countOfOdd = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            countOfOdd++;
            sumOfOdd += arr[i];
        }
    }
    cout << "\n\nThe number of odd elements in array: " << countOfOdd;
    cout << "\nThe sum of the odd elements: " << sumOfOdd;

    return 3;
}
int minElement(const int *arr, const int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
         min = arr[i];
        }
    }
    cout << "\n\nThe smallest element in array: " << min;

    return 4;
}
int maxElement(const int *arr, const int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "\nThe largest element in array: " << max;

    return 5;
}
void largestAdjacentPair(const int *arr, const int size) {
    int sumElem1 = 0, sumElem2 = 0;
    int largestSum = arr[0] + arr[1];

    for (int i = 0; i < size - 1; ++i) {
        const int current = arr[i];
        const int next = arr[i + 1];
        const int currentSum = current + next;
        if (currentSum >= largestSum) {
            largestSum = currentSum;
            sumElem1 = current;
            sumElem2 = next;
        }
    }
    cout << "\n\nThe adjacent pair with largest sum: " << sumElem1 << " " << sumElem2;
    cout << "\nSum of pair: " << largestSum;
}
int mostFrequent(const int *arr, const int size) {
    int tempArr[size];
    for (int i = 0; i < size; ++i) {
        tempArr[i] = arr[i];
    }

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (tempArr[j] > tempArr[j+1]) {
                swap(tempArr[j], tempArr[j+1]);
            }
        }
    }
    int maxCount = 1, currCount = 1, mostFreqElement = 0;
    for (int i = 1; i < size; ++i) {
        if (tempArr[i] == tempArr[i-1]) {
            currCount++;
        }
        else {
            currCount = 1;
        }
        if (currCount >= maxCount) {
            maxCount = currCount;
            mostFreqElement = tempArr[i];
        }
    }
    cout << "\n\nMost Frequent variable is: " << mostFreqElement;
    cout << " showing up " << maxCount << " times.\n";

    return 7;
}
void swappedArrayElement(int *arr, const int size) {
    int index1, index2;
    cout << "\nEnter the index of the elements you want to swap:";
    cin >> index1 >> index2;

    swap(arr[index1], arr[index2]);

    cout << "Array after swapping elements " << index1 << " and " << index2 << ":\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
}
void copyArray(const int *arr, int *arrCopy, const int size) {
    for (int i = 0; i < size; ++i) {
        arrCopy[i] = arr[i];
    }
    cout << "\nArray copy:\n";
    for (int i = 0; i < size; ++i) {
        cout << arrCopy[i] << " ";
    }
    cout << endl;
}
int main () {

    srand(time(nullptr));
    int size, arrRange1=0, arrRange2=0;

    cout << "Enter the size of the array:";
    cin >> size;
    const auto arr = new int [size];

    if (size > 100) {
        cout << "Ensure size is less than or equal to 100.";
        exit(1);
    }
    cout << "Enter the range of the values for array\n[Upper Limit] [Lower Limit]:";
    cin >> arrRange1 >> arrRange2;

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % (arrRange1 - arrRange2 + 1) + arrRange2;
    }
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    arithmeticMean(arr, size);

    occurrenceOfElement(arr, size);

    sumOfOdd(arr, size);

    minElement(arr, size);

    maxElement(arr, size);

    largestAdjacentPair(arr, size);

    mostFrequent(arr, size);

    swappedArrayElement(arr, size);

    int arrCopy[size];
    copyArray(arr, arrCopy, size);

    delete[] arr;
}