#include <iostream>
#include <list>
#include <fstream>
using namespace std;

class Contact {
public:
    string name;
    string surname;
    string phone;

    Contact() {
        cout << "Enter contact name:";
        cin >> name;
        cout << "Enter contact surname:";
        cin >> surname;
        cout << "Enter contact phone:";
        cin >> phone;
    }

    Contact(const string &name, const string &surname, const string &phone) {
        this->name = name;
        this->surname = surname;
        this->phone = phone;
    }
};

class AddressBook {
private:
    list<Contact> contacts;

public:
    void addContact(const Contact&contact) {
        if (contacts.size() < 100) {
            contacts.push_back(contact);
        }
        else {
            cout << "Address book is full!" << endl;
        }
    }

    void displayContacts() {
        for (const Contact& contact: contacts) {
            cout << contact.name << " " << contact.surname << " " << contact.phone << endl;
        }
    }

    void searchContact(const string& surname) {
        bool found = false;
        for (const Contact& contact: contacts) {
            if (contact.surname == surname) {
                cout << contact.name << " " << contact.surname << " " << contact.phone << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "Contact not found!" << endl;
        }
    }

    void saveToFile(const string& filename) {
        ofstream file(filename);
        if (file.is_open()) {
            for (const Contact& contact: contacts) {
                file << contact.name << " " << contact.surname << " " << contact.phone << endl;
            }
            cout << "Contacts saved to file!" << endl;
            file.close();
        }
        else {
            cout << "Unable to open file!" << endl;
        }
    }

    void loadFromFile(const string& filename) {
        ifstream file(filename);
        if (file.is_open()) {
            string name, surname, phone;
            while (file >> name >> surname >> phone) {
                Contact contact(name, surname, phone);
                contacts.push_back(contact);
            }
            cout << "Contacts loaded from file!" << endl;
            file.close();
        }
        else {
            cout << "Unable to open file!" << endl;
        }
    }
};

int main() {
    AddressBook addressBook;

    int choice;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Add contact\n";
        cout << "2. Display contacts\n";
        cout << "3. Search for contacts\n";
        cout << "4. Save to file\n";
        cout << "5. Load from file\n";
        cout << "6. Exit\n";
        cout << "Enter your choice:";
        cin >> choice;
        cout << "\n";

        switch (choice) {
            case 1: {
                Contact newContact;
                addressBook.addContact(newContact);
                break;
            }
            case 2: {
                addressBook.displayContacts();
                break;
            }
            case 3: {
                string surname;
                cout << "Enter surname to search:";
                cin >> surname;
                addressBook.searchContact(surname);
                break;
            }
            case 4: {
                string filename;
                cout << "Enter filename:";
                cin >> filename;
                addressBook.saveToFile(filename);
                break;
            }
            case 5: {
                string filename;
                cout << "Enter filename:";
                cin >> filename;
                addressBook.loadFromFile(filename);
                break;
            }
            case 6: {
                break;
            }
            default: {
                cout << "Invalid Choice!" << endl;
            }
        }
    }
    while (choice != 6);
}
