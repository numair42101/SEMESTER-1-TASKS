#include <iostream>
using namespace std;
int progressday(int miles[], int saturdays)
{
    int day = 0;
    for (int i = 0; i < saturdays - 1; i++)
    {
        if (miles[i] < miles[i + 1])
            day++;
    }
    return day;
}
int main()
{
    int saturdays;
    cout << "Enter the number of saturdays: ";
    cin >> saturdays;
    if (saturdays < 2)
        cout << "You need to enter at least 2 saturdays to calculate progress." << endl;
    else
    {
        int miles[saturdays];
        cout << "How many miles did he run on each saturday: ";
        for (int i = 0; i < saturdays; i++)
            cin >> miles[i];
        cout << "Progress days: " << progressday(miles, saturdays);
    }
    return 0;
}