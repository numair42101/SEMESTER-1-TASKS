#include <iostream>
using namespace std;
int frequencychecker(int number, int digit)
{
    int frequency = 0;
    while (number != 0)
    {
        if (number % 10 == digit)
            frequency++;
        number = number / 10;
    }
    return frequency;
}
int main()
{
    int number, digit;
    cout << "Enter the number:";
    cin >> number;
    cout << "Enter the digit to check:";
    cin >> digit;
    cout << frequencychecker(number, digit);
}