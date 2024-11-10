#include <iostream>
using namespace std;

bool isSpecialArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if ((i % 2 == 0) && (array[i] % 2 == 0) || (i % 2 != 0) && (array[i] % 2 != 0))
            return true;
    }
    return false;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int array[size];
    cout << "Enter " << size << " elements of array:" << endl;
    for (int i = 0; i < size; i++)
        cin >> array[i];
    if (isSpecialArray(array, size))
        cout << "The array is special";
    else
        cout << "The array is not special";
    return 0;
}