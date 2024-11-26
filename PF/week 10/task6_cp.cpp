#include <iostream>
using namespace std;
string sortedarray(int elements, int arr[])
{
    string sortedarr = "";
    int smallest = arr[0];
    for (int i = 0; i < elements; i++)
    {
        for (int j = i + 1; j < elements; j++)
        {
            if (arr[j] < arr[i])
            {
                smallest = arr[j];
                arr[j] = arr[i];
                arr[i] = smallest;
            }
        }
        sortedarr = sortedarr + to_string(arr[i]) + " ";
    }
    return sortedarr;
}
int main()
{
    int elements;
    cout << "Enter the number of elements: ";
    cin >> elements;
    int arr[elements];
    cout << "Enter the elements: ";
    for (int i = 0; i < elements; i++)
        cin >> arr[i];

    cout << sortedarray(elements, arr);
    return 0;
}