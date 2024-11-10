#include <iostream>
using namespace std;

int chordlength(string chord)
{
    int length = 0;
    while (chord[length] != '\0')
        length++;
    return length;
}

void jazzifyChords(string chords[], int numchords)
{

    for (int i = 0; i < numchords; i++)
    {
        int size = chordlength(chords[i]);
        if ((size == 0) || (chords[i][size - 1] != '7'))
            chords[i] = chords[i] + '7';
    }

    cout << "Jazzified chords:" << endl;
    for (int i = 0; i < numchords; i++)
        cout << chords[i] << endl;
}
int main()
{
    int numchords;
    cout << "Enter number of chords: ";
    cin >> numchords;
    string chords[numchords];
    cout << "Enter " << numchords << " chords:" << endl;
    for (int i = 0; i < numchords; i++)
        cin >> chords[i];
    jazzifyChords(chords, numchords);
    return 0;
}
