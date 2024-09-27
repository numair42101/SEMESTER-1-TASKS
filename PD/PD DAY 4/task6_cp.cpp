#include <iostream>
using namespace std;

void longesttime(int hours, int minutes);

main()
{
    int hours, minutes;
    cout << "Enter the time in hours ";
    cin >> hours;
    cout << "Enter the number of minutes ";
    cin >> minutes;
    longesttime(hours, minutes);
}

void longesttime(int hours, int minutes)
{
    int htm = hours * 60;
    if (htm > minutes)
    {
        cout << hours;
    }
    else
    {
        cout << minutes;
    }
}