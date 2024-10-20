#include <iostream>
using namespace std;
void printtable(int number)
{
    for (int i = 0; i <= 10; i++)
        cout << number << " * " << i << " = " << number * i << endl;
}
int main()
{
    int number;
    cout << "Enter any number:";
    cin >> number;
    printtable(number);
}