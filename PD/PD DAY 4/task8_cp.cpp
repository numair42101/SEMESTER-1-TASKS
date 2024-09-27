#include <iostream>
using namespace std;

void pet(int holiday);

main()
{
    int holiday;
    cout << "Holidays: ";
    cin >> holiday;
    pet(holiday);
}

void pet(int holiday)
{
    int workingday, timetoplay, remainingtime;
    workingday = 365 - holiday;
    timetoplay = (holiday * 127) + (workingday * 63);
    if (timetoplay < 30000)
    {
        remainingtime = 30000 - timetoplay;
        cout << "Tom sleeps well" << endl;
        cout << remainingtime / 60 << " hours and " << remainingtime % 60 << " minutes less for play";
    }
    else
    {
        remainingtime = timetoplay - 30000;
        cout << "Tom will run away" << endl;
        cout << remainingtime / 60 << " hours and " << remainingtime % 60 << " minutes for play";
    }
}