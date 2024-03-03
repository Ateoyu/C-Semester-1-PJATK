#include "iostream"
using namespace std;

int memoryForInt(){
    int var;
    const int *p = &var;

    cout << "Address: " << p;
    cout << "\nValue: " << *p;

    return *p;
}

int main() {

    memoryForInt();
}