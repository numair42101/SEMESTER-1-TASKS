#include <iostream>
using namespace std;

void change(string input);

main()
{
    string input;
    cout << "Enter true or false : ";
    cin >> input;

    change(input);
}

void change(string input)
{
    if (input == "true")
    {
        cout << "false";
    }
    else if (input == "false")
    {
        cout << "true";
    }
    else
    {
        cout << "wrong input";
    }
}