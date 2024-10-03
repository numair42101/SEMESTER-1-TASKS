#include <iostream>
using namespace std;
int check(int number1);

int main()
{
    int number1, number3;
    cout << "Enter a five-digit number ";
    cin >> number1;
    number3 = check(number1);
    if (number3 == 1)
    {
        cout << "The number is oddish.";
    }
    if (number3 == 0)
    {
        cout << "The number is evenish.";
    }
}
    int check(int number1)
    {
        int number2, digit1, digit2, digit3, digit4, digit5;
        digit1 = number1 / 10000;
        digit2 = (number1 % 10000) / 1000;
        digit3 = (number1 % 1000) / 100;
        digit4 = (number1 % 100) / 10;
        digit5 = (number1 % 10);
        number2 = (digit1 + digit2 + digit3 + digit4 + digit5) % 2;
        return (number2);
    }