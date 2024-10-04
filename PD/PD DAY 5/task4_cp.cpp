#include <iostream>
using namespace std;
void projecttimecalculation(int neededhours, int days, int workers);
int main()
{
    int neededhours, days, workers;
    cout << "Enter the needed hours : ";
    cin >> neededhours;
    cout << "Enter the days that the firm has : ";
    cin >> days;
    cout << "Enter the number of all workers : ";
    cin >> workers;
    projecttimecalculation(neededhours, days, workers);
}
void projecttimecalculation(int neededhours, int days, int workers)
{
    int givenhours;
    string result;
    givenhours = (workers * 10) * (days - (days / 10.0));
    if (givenhours < neededhours)
    {
        cout << "Not enough time! " << neededhours - givenhours << " hours needed.";
    }
    if (givenhours > neededhours)
    {
        cout << "Yes! " << givenhours - neededhours <<" hours left.";
    }
}