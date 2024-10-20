#include <iostream>
using namespace std;
int digitsum(int number)
{
    int sum = 0;
    while (number != 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }
    return sum;
}
int main()
{
    int number, digit;
    cout << "Enter the number:";
    cin >> number;
    cout << digitsum(number);
}