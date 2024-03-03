#include "iostream"
using namespace std;

int stack[100], top = -1, rear = -1;

void displayArray() {
    cout << "[Current stack]\n";
    for (int i = top; i >= 0; --i) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

bool isFull() {
    if (top >= 100 - 1) {
        cout << "Stack overflow.\n" << endl;
        return true;
    }
    return false;
}

void push() {
    if (isFull()) {
        return;
    }
    else {
        int value;
        cout << "Enter element you want to insert:";
        cin >> value;
        top++;
        stack[top] = value;
    }
    displayArray();
}

void pop() {
    if (top <= -1) {
        cout << "Stack underflow.\n";
        return;
    }
    else {
        cout << "Element removed from stack: " << stack[top] << '\n';
        top--;
    }
    displayArray();
}

void size() {
    int sSize = 0;
    for (int i = top; i >= 0; --i) {
        sSize++;
    }
    cout << sSize << '\n';
}

int main() {
    int choice;
    cout << "[1] Insert element to stack\n";
    cout << "[2] Delete element from stack\n";
    cout << "[3] Count size of stack\n";
    cout << "[4] Display all the elements of stack\n";
    cout << "[5] Check if stack is full\n";
    cout << "[6] Exit\n\n";
    do {
        cout << "Enter your choice:";
        cin >> choice;
        switch (choice) {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: size();
            break;
            case 4: displayArray();
            break;
            case 5: if (isFull() == false)
                cout << "Stack is not full.\n";
            break;
            case 6: cout << "Exit." << endl;
            break;
            default: cout << "Invalid choice." << endl;
        }
    }
    while (choice != 6);
}
