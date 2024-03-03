#include <iostream>
using namespace std;

class Invoice {
private:
    double netto{};
    string date;
public:
    Invoice();

    void invoicePreTax() const {
        cout << "\n" << date;
        cout << "\nTax percentage: 23%\n";
        const double tax = netto*0.23;
        cout << "Taxed amount: "<< tax;
        const double brutto = netto + tax;
        cout << "\nBrutto: " << brutto << endl;
    }
};

Invoice::Invoice() {
    cout << "Enter date:";
    cin >> date;

    cout << "Enter netto amount:";
    cin >> netto;
}

int main() {
    const Invoice object;

    object.invoicePreTax();
}