#include <iostream>
using namespace std;

class Worker {
public:
    void doxxing();
private:
    string firstname;
    string surname;
    string street;
    string houseNum;
    string postcode;
    string city;
};

void Worker::doxxing() {
    cout << "Enter your firstname:";
    getline(cin, firstname);
    cout << "Enter your surname:";
    getline(cin, surname);
    cout << "Enter your street:";
    getline(cin, street);
    cout << "Enter your house numer:";
    getline(cin, houseNum);
    cout << "Enter your postcode:";
    getline(cin, postcode);
    cout << "Enter your city:";
    getline(cin, city);
    cout << endl;

    cout << "----------------------\n";
    cout << firstname << " " << surname << '\n';
    cout << street << " " << houseNum << '\n';
    cout << postcode << " " << city << '\n';
    cout << "----------------------" << endl;
}

int main() {
    Worker object;
    object.doxxing();
}

