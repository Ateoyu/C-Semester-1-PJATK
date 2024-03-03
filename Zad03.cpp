#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r;
    float angle;
    double area;
    float radian;

    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter angle: ";
    cin >> angle;

    radian = M_PI*angle/180;
    area = (radian - sin(radian))*(pow(r,2))*0.5;


    cout << "Area of the segment: " << area;

    return 0;
}