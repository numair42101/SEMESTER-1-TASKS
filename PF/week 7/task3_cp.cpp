#include <iostream>
using namespace std;
int totaldigits(int number)
{
    int x = 0;
    for (int i = 1; i <= number; i = i * 10)
        x++;
    return x;
}
int main()
{
    int number;
    cout << "Enter any number:";
    cin >> number;
    cout << totaldigits(number);
}