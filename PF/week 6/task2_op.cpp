#include <iostream>
using namespace std;
int checkparity(int number)
{
    int digit1, digit2, digit3, sum;
    digit1 = number % 10;
    digit2 = (number % 100) / 10;
    digit3 = number / 100;
    sum = digit1 + digit2 + digit3;
    if (((sum % 2 == 0) && (number % 2 == 0)) || ((sum % 2 == 1) && (number % 2 == 1)))
    {
        return 1;
    }
}
int main()
{
    int number;
    cout << "Enter any 3 digit number:";
    cin >> number;
    cout << checkparity(number);
}