#include <iostream>
using namespace std;
float pyramidvolume(float length, float width, float height, string unit);
int main()
{
    float length, width, height;
    string unit;
    cout << "Enter the length of pyramid (in meters): ";
    cin >> length;
    cout << "Enter the width of pyramid (in meters): ";
    cin >> width;
    cout << "Enter the height of pyramid (in meters): ";
    cin >> height;
    cout << "Enter the desire output unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    cout << pyramidvolume(length, width, height, unit) << "cubic" << unit;
}
float pyramidvolume(float length, float width, float height, string unit)
{
    double volume;
    float l, w, h;
    if (unit == "millimeters")
    {
        l = length * 1000;
        w = width * 1000;
        h = height * 1000;
        volume = (l * w * h) / 3;
        return volume;
    }
    if (unit == "centimeters")
    {
        l = length * 100;
        w = width * 100;
        h = height * 100;
        return volume;
        volume = (l * w * h) / 3;
    }
    if (unit == "meters")
    {
        l = length;
        w = width;
        h = height;
        volume = (l * w * h) / 3;
        return volume;
    }
    if (unit == "kilometers")
    {
        l = length / 1000;
        w = width / 1000;
        h = height / 1000;
        volume = (l * w * h) / 3;
        return volume;
    }
}