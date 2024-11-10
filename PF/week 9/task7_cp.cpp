#include <iostream>
using namespace std;

double calculateTotalResistance(double resistance[], int size)
{
    double totalResistance = 0.0;
    for (int i = 0; i < size; i++)
        totalResistance += resistance[i];
    return totalResistance;
}
int main()
{
    int resistors;
    cout << "Enter the number of resistors in series: ";
    cin >> resistors;
    double resistance[resistors];
    cout << "Enter the resistance values (in ohms) of the " << resistors << " resistors, one per line: " << endl;
    for (int i = 0; i < resistors; i++)
        cin >> resistance[i];
    cout << "The total resistance of the series circuit is " << calculateTotalResistance(resistance, resistors) << " ohms.";
    return 0;
}