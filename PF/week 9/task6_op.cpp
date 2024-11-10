#include <iostream>
using namespace std;

int findLargestNumber(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter " << size << " numbers, one per line: " << endl;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    cout << "The largest entered number is: " << findLargestNumber(array, size);
    return 0;
}
