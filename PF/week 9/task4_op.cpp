#include <iostream>
using namespace std;
void reversenumbers(int array[], int numbers)
{
    for (int i = numbers; i >= 0; i--)
        cout << array[i] << endl;
}
int main()
{
    int numbers;
    cout << "How many numbers you want to enter: ";
    cin >> numbers;
    int array[numbers];
    cout << "Enter numbers: ";
    for (int i = 0; i < numbers; i++)
        cin >> array[i];
    cout << "Numbers in reverse order: ";
    reversenumbers(array, numbers);
    return 0;
}