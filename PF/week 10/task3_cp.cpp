#include <iostream>
using namespace std;
string peakelemement(int elements, int arr[])
{
    string peak = "";
    for (int i = 1; i < elements - 1; i++)
    {
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            peak = peak + to_string(arr[i]) + " ";
    }
    return peak;
}

int main()
{
    int elements;
    cout << "How many Elements you want to Enter: ";
    cin >> elements;
    int arr[elements];
    cout << "Enter Elements: ";
    for (int i = 0; i < elements; i++)
        cin >> arr[i];
    string result = peakelemement(elements, arr);
    if (result == "")
        cout << "No Peak Element Found";
    else
        cout << result;
    return 0;
}