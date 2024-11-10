#include <iostream>
using namespace std;
int wordlength(string input)
{
    int size = 0;
    while (input[size] != '\0')
        size++;
    return size;
}
int validateinput(string input, int size)
{
    int validity = 1;
    for (int i = 0; i < size; i++)
    {
        if (!((input[i] <= '9') && (input[i] >= '0')))
            validity = 0;
    }
    if (size != 4)
        validity = 0;
    return validity;
}
void calculatemoves(string input, int size)
{
    int value;
    string calculatedmoves = "";
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    for (int j = 0; j < size; j++)
    {
        value = (input[j] - '0') + j;
        if (value > 9)
            value = value % 10;
        calculatedmoves = calculatedmoves + moves[value] + " ";
    }
    cout << calculatedmoves;
}
int main()
{
    int size;
    string input;
    cout << "Enter your PIN code: ";
    cin >> input;
    size = wordlength(input);
    if (validateinput(input, size))
        calculatemoves(input, size);
    else
        cout << "Invalid PIN code.";
    return 0;
}