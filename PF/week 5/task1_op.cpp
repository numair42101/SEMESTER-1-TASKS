#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;
    cout << "The minimum of " << num1 << " and " << num2 << " is " << min(num1, num2);
}