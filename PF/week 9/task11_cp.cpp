#include <iostream>
using namespace std;

int main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != 'a' && sentence[i] != 'e' && sentence[i] != 'i' && sentence[i] != 'o' &&
            sentence[i] != 'u' && sentence[i] != 'A' && sentence[i] != 'E' && sentence[i] != 'I' &&
            sentence[i] != 'O' && sentence[i] != 'U')
            cout << sentence[i];
    }
    return 0;
}
