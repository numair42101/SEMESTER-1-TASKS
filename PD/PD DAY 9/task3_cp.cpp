#include <iostream>
using namespace std;
int stringlength(string input)
{
    int length = 0;
    while (input[length] != '\0')
        length++;
    return length;
}
bool checkstring(string input)
{
    int count = 0;
    for (int i = 0; i < stringlength(input); i++)
        count++;
    if (count % 2 == 0)
        return true;
    else
        return false;
}
int main()
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    if (checkstring(input))
        cout << "True";
    else
        cout << "False";
    return 0;
}