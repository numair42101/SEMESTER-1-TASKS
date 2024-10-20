#include <iostream>
using namespace std;
bool isprime(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int primorial(int number)
{
    int prod = 2, count = 1, x = 3;
    while (count < number)
    {
        if (isprime(x))
        {
            count++;
            prod = prod * x;
        }
        x++;
    }
    return prod;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << primorial(number);
    return 0;
}