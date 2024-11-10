#include <iostream>
using namespace std;

bool canPayWithChange(double change[], double amountdue)
{
    double sum = (change[0] * .25) + (change[1] * .1) + (change[2] * .05) + (change[3] * .01);
    if (sum >= amountdue)
        return true;
    else
        return false;
}

int main()
{
    double amountdue, change[4];
    cout << "Enter quaters: ";
    cin >> change[0];
    cout << "Enter dimes: ";
    cin >> change[1];
    cout << "Enter nickels: ";
    cin >> change[2];
    cout << "Enter pennies: ";
    cin >> change[3];
    cout << "Enter total ammount due: ";
    cin >> amountdue;
    cout << "Can you pay the ammount: " << canPayWithChange(change, amountdue);

    return 0;
}