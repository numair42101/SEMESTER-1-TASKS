#include <iostream>
using namespace std;
int main()
{
    int size, count = 0;
    cout << "Enter the number of elements: ";
    cin >> size;
    int array[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        if (array[i] % 10 == 7)
            count = 1;
    }
    if (count == 1)
        cout << "Boom!";
    else
        cout << "There is no 7 in the array";
    return 0;
}