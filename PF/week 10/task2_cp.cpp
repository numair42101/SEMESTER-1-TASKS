#include <iostream>
using namespace std;
int countletter(int words, string word[], char letter)
{
    int count = 0;
    for (int i = 0; i < words; i++)
    {
        for (int j = 0; word[i][j] != '\0'; j++)
        {
            if (word[i][j] == letter)
                count++;
        }
    }
    return count;
}
int main()
{
    int words;
    cout << "Enter how many words you want to Enter: ";
    cin >> words;
    string word[words];
    for (int i = 0; i < words; i++)
    {
        cout << "Enter word " << i + 1 << ": ";
        cin >> word[i];
    }
    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    cout << letter << " shows up " << countletter(words, word, letter) << " times in the data.";
    return 0;
}