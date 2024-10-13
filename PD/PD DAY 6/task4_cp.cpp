#include <iostream>
using namespace std;
float calculatebill(char code, char time, int minutes)
{
    float bill;
    if (((code == 'r') || (code == 'R')) && (minutes > 50))
        bill = 10 + ((minutes - 50) * 0.20);
    else if ((code == 'r') || (code == 'R') && (minutes <= 50))
        bill = 10.0;
    else
        bill = 0.0;
    if (((code == 'p') || (code == 'P')) && ((time == 'd') || (time == 'D')))
        if (minutes > 75)
            bill = 25.0 + ((minutes - 75) * 0.10);
        else if (minutes <= 75)
            bill = 25.0;
        else
            bill = 0.0;
    else if ((code == 'p') || (code == 'P') && ((time == 'n') || (time == 'N')))
        if (minutes > 100)
            bill = 25.0 + ((minutes - 100) * 0.05);
        else if (minutes <= 100)
            bill - 25.0;
        else
            bill - 0.0;
    return bill;
}
int main()
{
    char code, time;
    int minutes;
    float totalbill;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> code;
    cout << "Enter the time of call (D/d for day, N/n for night): ";
    cin >> time;
    cout << "Enter the number of minutes used: ";
    cin >> minutes;
    if (((code == 'r') || (code == 'R')))
        cout << "Service type: Regular" << endl;
    else if (((code == 'p') || (code == 'P')))
        cout << "Service type: Premium" << endl;
    else
        cout << "Wrong input" << endl;
    cout << "Total minutes used: " << minutes << " minutes" << endl;
    totalbill - calculatebill(code, time, minutes);
    if (totalbill != 0)
        cout << "Amount due: $" << totalbill << endl;
    else
        cout << "wrong input" << endl;
}