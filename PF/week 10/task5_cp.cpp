#include <iostream>
using namespace std;
int volume(int arr[], int length)
{
    int vol = 0;
    for (int i = 0; i < length; i = i + 3)
        vol = vol + (arr[i] * arr[i + 1] * arr[i + 2]);
    return vol;
}
int main()
{
    int boxes, length;
    cout << "Enter the number of boxes: ";
    cin >> boxes;
    if (boxes > 0)
    {
        length = boxes * 3;
        int arr[length];
        cout << "Enter dimensions: ";
        for (int i = 0; i < length; i++)
            cin >> arr[i];
        cout << volume(arr, length);
    }
    else
        cout << "Invalid box input";
    return 0;
}