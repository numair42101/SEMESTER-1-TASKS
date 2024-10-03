#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char alphabet;
    cout << "Enter a character (A/a): ";
    cin >> alphabet;
    if (alphabet == 'A')
    {
        cout << " You has entered capital A ";
    }
    if (alphabet == 'a')
    {
        cout << " You has entered small a ";
    }
}