#include <iostream>
using namespace std;

int findgreatest(int num1, int num2, int num3)
{
    if ((num1 > num2) && (num1 > num3))
        return num1;
    else if ((num1 < num2) && (num2 > num3))
        return num2;
    else
        return num3;
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
    cout << findgreatest(num1, num2, num3);
}