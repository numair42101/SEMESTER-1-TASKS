#include <iostream>
using namespace std;
int FindStringLength(string word)
{
    int i = 0;
    while (word[i] != '\0')
        i++;
    return i;
}
void nextletter(string word, int length)
{
    for (int i = 0; i < length; i++)
    {
        char new_word = word[i] + 1;
        if (word[i] == 'z')
            new_word = 'a';
        else if (word[i] == 'Z')
            new_word = 'A';
        else if (word[i] == ' ')
            new_word = ' ';
        cout << new_word;
    }
}
int main()
{
    string word;
    cout << "Enter a string: ";
    getline(cin, word);
    int length = FindStringLength(word);
    cout << "Reversed word: ";
    nextletter(word, length);
    return 0;
}