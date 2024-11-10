#include <iostream>
using namespace std;
int wordlength(string word)
{
    int i = 0;
    while (word[i] != '\0')
        i++;
    return i;
}
int main()
{
    string word1, word2;
    int count1, count2, size1 = wordlength(word1), size2 = wordlength(word2);
    cout << "Enter first word: ";
    cin >> word1;
    cout << "Enter second word: ";
    cin >> word2;
    for (char i = 'a'; i <= 'z'; i++)
    {
        for(int j=0;j<size1;j++){
            if(i==word1[j]){
                count1++;
        }
    }
    return 0;
}