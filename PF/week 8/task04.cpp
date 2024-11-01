#include <iostream>
using namespace std;

bool isPrime(int x)
{
    for (int i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int primenumbers(int number)
{
    int count = 0;
    for (int i = 2; i <= number; i++)
    {
        if (isPrime(i))
            count++;
    }
    return count;
}

int main()
{
    int number;
    cout << "Enter any number: ";
    cin >> number;
    cout << primenumbers(number);
    return 0;
}