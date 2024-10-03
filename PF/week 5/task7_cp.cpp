#include <iostream>
using namespace std;
int is_symmetrical(int number1);

int main()
{
    int number1, number3;
    cout << "Enter a three-digit number: ";
    cin >> number1;
    number3 = is_symmetrical(number1);
    if (number1 == number3)
    {
        cout << "The number is symmetrical.";
    }
    if (number1 != number3)
    {
        cout << "The number is not symmetrical.";
    }
}

int is_symmetrical(int number1)
{
    int number2, digit1, digit2, digit3;
    digit1 = number1 / 100;
    digit2 = (number1 % 100) / 10;
    digit3 = (number1 % 10);
    number2 = (digit3 * 100) + (digit2 * 10) + (digit1);
    return (number2);
}
