#include <iostream>
using namespace std;
void generatefibonacci(int length)
{
    int n1 = 0, n2 = 1, n3;
    if (length == 1)
        cout << n1;
    else if (length == 2)
        cout << n1 << ", " << n2;
    else if (length >= 3)
    {
        cout << n1 << ", " << n2;
        for (int i = 3; i <= length; i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            cout << ", " << n3;
        }
    }
}
int main()
{
    int length;
    cout << "Enter length of fibonacci:";
    cin >> length;
    generatefibonacci(length);
}