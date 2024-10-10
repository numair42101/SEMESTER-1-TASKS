#include <iostream>
using namespace std;
bool aresamenumber(int num1, int num2, int num3)
{
    if ((num1 == num2) && (num2 == num3))
        return true;
    else
        return false;
}
int main()
{
    int num1, num2, num3;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    cout << "Enter third number:";
    cin >> num3;
    cout << aresamenumber(num1, num2, num3);
}