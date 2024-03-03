#include <iostream> //input-output stream = used by preprocessor to make the contents of this available to use.

using namespace std; //standard namespace = collection of names or identifiers defined by C++ standard library.

int main() { // int = return type. main function.
    int num;

    cout << "Enter a positive number: "; //cout << = outputs to console
    cin >> num; //cin >> = reads from the standard C input stream
    if (num > 0) {
        cout << "Octal: " << oct << num << endl;
        cout << "Hexadecimal: " << hex << num << endl;
    }
    else
        cout << "Input is negative. Please enter a positive number";

    return 0; //0 = return. 0 is an example of int. int = not fractional.
}
