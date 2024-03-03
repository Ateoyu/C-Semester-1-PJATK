#include <iostream>
using namespace std;

int main() {

    double a, b, c, d, e, f;
    double x, y, det;

    cout << "Enter coefficients a, b, c, d, e, f: \n";
    cin >> a >> b >> c >> d >> e >> f;

    det = a*d - b*c;

    if (det == 0) {
        cout << "Equations have no unique solution.";
    }
    else {
        x = (e*d - b*f) / det;
        y = (a*f - e*c) / det;

        cout << "x = " << x << ", y = " << y << endl;
    }
    return 0;
}
