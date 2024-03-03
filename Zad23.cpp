#include <iostream>
using namespace std;

int main(){
    int arr1[100][100];
    int arr2[100][100];
    int width1, height1, width2, height2;


    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> width1 >> height1;
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> width2 >> height2;

    int arr3[width1][height2];

    if(width1 != width2 || height1 != height2) {
        cout << "ERROR: Matrices are not the same size";
        return 0;
    }
    cout << "Enter the elements of the first matrix: \n";
    for(int i = 0; i < height1; i++) {
        for(int j = 0; j < width1; j++) {
            cin >> arr1[i][j];
        }

    }
    cout << "Enter the elements of the second matrix: \n";
    for(int i = 0; i < height2; i++) {
        for(int j = 0; j < width2; j++) {
            cin >> arr2[i][j];
        }
    }
    cout << "\n" << "Sum of the 2 matrices: \n";
    for(int i = 0; i < height2; i++) {
        for(int j = 0; j < width2; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];

            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}