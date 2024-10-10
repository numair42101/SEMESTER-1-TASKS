#include <iostream>
using namespace std;
float discount(string day, string month, float bill)
{
    float payableamount = bill;
    if ((day == "sunday") && ((month == "october") || (month == "march") || (month == "august")))
    {
        payableamount = bill - (bill / 10);
    }
    else if ((day == "monday") && ((month == "november") || (month == "december")))
    {
        payableamount = bill - (bill / 20);
    }
    return payableamount;
}
int main()
{
    float bill;
    string day, month;
    cout << "Enter purchase day:";
    cin >> day;
    cout << "Enter purchase month:";
    cin >> month;
    cout << "Enter purchase amount:";
    cin >> bill;
    cout << discount(day, month, bill);
}