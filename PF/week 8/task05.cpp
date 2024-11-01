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

int countones(int number)
{
    int count = 0;
    while (number > 0)
    {
        if (number & 1)
            count++;
        number = number >> 1;
    }
    return count;
}

string howbad(int number)
{
    string type;
    int count = countones(number);
    if (count % 2 == 0)
        type = "evil";
    else
        type = "odious";
    if (isPrime(count))
        type = type + ", pernicious";
    return type;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << howbad(number);
    return 0;
}