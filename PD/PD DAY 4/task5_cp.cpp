#include <iostream>
using namespace std;

void possiblebonus(int myposition, int friendposition);

main()
{
    int myposition, friendposition;
    cout << "Enter your position: ";
    cin >> myposition;
    cout << "Enter friends position: ";
    cin >> friendposition;

    possiblebonus(myposition, friendposition);
}

void possiblebonus(int myposition, int friendposition)
{
    int difference = friendposition - myposition;
    if (difference <= 6)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}