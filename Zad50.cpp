#include <algorithm>
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    string surname;
    int yearOfBirth;

    Person() {
        name = "";
        surname = "";
        yearOfBirth = 0;
    }
    Person (const Person &person) {
        name = person.name;
        surname = person.surname;
        yearOfBirth = person.yearOfBirth;
        reverse(name.begin(), name.end());
    }

    void input() {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter surname:";
        cin >> surname;
        cout << "Enter year of birth:";
        cin >> yearOfBirth;
        cout << endl;
    }
};

int main() {
    Person person1;
    person1.input();

    const Person copy = person1;

    cout << "Original person: " << person1.name << " " << person1.surname << " " << person1.yearOfBirth << endl;
    cout << "Copied person: " << copy.name << " " << copy.surname << " " << copy.yearOfBirth << endl;

    return 0;
}