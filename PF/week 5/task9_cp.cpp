#include <iostream>
using namespace std;
string futuretime(int hours, int minutes);
int main()
{
    int hours, minutes;
    string time;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes : ";
    cin >> minutes;
    cout << futuretime(hours, minutes);
}
string futuretime(int hours, int minutes)
{
    int mm, hh = hours;
    string result;

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
    result = to_string(hh) + ":" + to_string(mm);
    return result;
}
