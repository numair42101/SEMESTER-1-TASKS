#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int number)
{
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == number)
            return true;
    }
    return false;
}
int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int array[size];
    cout << "Enter " << size << " numbers, one per line: " << endl;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int number;
        cin >> number;
        if (isAlreadyEntered(array, count, number))
            cout << "Already Entered: " << number << endl;
        else
        {
            array[count] = number;
            count++;
        }
    }
    cout << "Unique numbers entered: ";
    for (int i = 0; i < count; i++)
        cout << array[i] << " ";
    cout << endl;
    return 0;
}