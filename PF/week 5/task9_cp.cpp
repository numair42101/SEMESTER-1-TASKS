#include <iostream>
using namespace std;
void futuretime(int hours, int minutes);
int main()
{
    int hours, minutes;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes : ";
    cin >> minutes;
    futuretime(hours, minutes);
}
void futuretime(int hours, int minutes)
{
    int mm, hh = hours;
    mm = minutes + 15;
    if (mm > 59)
    {
        mm = mm - 60;
        hh = hours + 1;
    }
    if (hh > 23)
    {
        hh = hh - 24;
    }
    cout << hh << ":" << mm;
}
