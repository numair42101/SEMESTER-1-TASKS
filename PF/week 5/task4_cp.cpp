#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float base, angle, height;
    cout << "Enter the distance from the base of the tree (in feet)";
    cin >> base;
    cout << "Enter the angle of elevation (in degrees)";
    cin >> angle;
    height = (tan(angle / 57.295843) * base);
    cout << "The height of the tree is " << height << " feet";
}