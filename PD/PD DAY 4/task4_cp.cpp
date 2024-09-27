#include <iostream>
using namespace std;

void checkspeed(int speed);

main()
{
    int speed;
    cout << "Enter speed : ";
    cin >> speed;

    checkspeed(speed);
}

void checkspeed(int speed)
{
    if (speed > 100)
    {
        cout << "HALT...YOU WILL BE CHALLENGED!!!";
    }
    else
    {
        cout << "PERFECT! YOU ARE GOING GOOD";
    }
}