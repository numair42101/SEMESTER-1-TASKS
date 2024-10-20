#include <iostream>
using namespace std;
int isprime(int number)
{
    for (int i = number - 1; i > 1; i--)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << isprime(number);
    return 0;
}