#include <iostream>
using namespace std;
int stringlength(string input)
{
    int length = 0;
    while (input[length] != '\0')
        length++;
    return length;
}
string reversestring(string input, int length)
{
    string reversed = "", word = "";
    for (int i = length; i > 0; i--)
    {
        if (input[i - 1] != ' ')
            word = input[i - 1] + word;
        if (input[i - 1] == ' ' || (i - 1) == 0)
        {
            reversed = reversed + word + " ";
            word = "";
        }
    }
    return reversed;
}

int main()
{
    string input;
    cout << "Enter any string: ";
    getline(cin, input);
    int length = stringlength(input);
    cout << length << "\t" << reversestring(input, length);
    return 0;
}