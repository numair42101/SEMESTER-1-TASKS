#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2)
{
    int smallnum;
    if (number1 > number2)
        smallnum = number2;
    else
        smallnum = number1;
    for (int i = smallnum; i >= 0; i--)
    {
        if (number1 % i == 0 && number2 % i == 0)
            return i;
    }
}
int calculateLCM(int number1, int number2, int gcd)
{
    return (number1 * number2) / gcd;
}
int main()
{
    int number1, number2, gcd;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    gcd = calculateGCD(number1, number2);
    cout << "GCD: " << gcd<<endl;
    cout << "LCM: " << calculateLCM(number1, number2, gcd);
    return 0;
}