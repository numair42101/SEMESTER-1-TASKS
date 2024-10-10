#include <iostream>
using namespace std;
int check(int num1, int num2)
{
    if (num1 > num2)
        return 1;
    else
        return 0;
}
int main()
{
    int num1, num2;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    cout << check(num1, num2);
}