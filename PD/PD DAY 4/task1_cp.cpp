#include <iostream>
using namespace std;

void compare(int num1, int num2);

main()
{
    int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    compare(num1, num2);
}

void compare(int num1, int num2)
{
    if (num1 == num2)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
}