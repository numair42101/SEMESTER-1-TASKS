#include <iostream>
using namespace std;
int FindStringLength(string word)
{
    int i = 0;
    while (word[i] != '\0')
        i++;
    return i;
}
void ReverseString(string word, int length)
{
    for (int i = length; i >= 0; i--)
        cout << word[i];
}
int main()
{
    string word;
    cout << "Enter a string: ";
    cin >> word;
    int length = FindStringLength(word);
    ReverseString(word, length);
    return 0;
}