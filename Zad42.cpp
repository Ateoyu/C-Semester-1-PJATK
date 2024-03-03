#include "iostream"
using namespace std;

int stack[100], top = -1, rear = -1;

void displayArray() {
    cout << "[Current queue]\n";
    for (int i = top; i <= rear; ++i) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

bool isFull() {
    if (rear == 100 - 1) {
        cout << "Queue overflow.\n" << endl;
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
        if (top == -1) {
            top = 0;
        }
        cout << "Enter element you want to insert:";
        cin >> value;
        rear++;
        stack[rear] = value;
    }
    displayArray();
}

void pop() {
    if (top == -1 || top > rear) {
        cout << "Queue underflow.\n";
        return;
    }
    else {
        cout << "Element removed from queue: " << stack[top] << '\n';
        top++;
    }
    displayArray();
}

void size() {
    int qSize = 0;
    for (int i = top; i <= rear; ++i) {
        qSize++;
    }
    cout << qSize << '\n';
}

int main() {
    int choice;
    cout << "[1] Insert element to queue\n";
    cout << "[2] Delete element from queue\n";
    cout << "[3] Count size of queue\n";
    cout << "[4] Display all the elements of queue\n";
    cout << "[5] Check if queue is full\n";
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
                    cout << "Queue is not full.\n";
                break;
            case 6: cout << "Exit." << endl;
                break;
            default: cout << "Invalid choice." << endl;
        }
    }
    while (choice != 6);
}
