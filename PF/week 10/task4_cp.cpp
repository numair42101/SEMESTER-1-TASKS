#include <iostream>
using namespace std;
bool isRepeating(int number);
int arr[100];
int main()
{
    int n;
    cout << "Enter the length of array : ";
    cin >> n;
    cout << "Enter numbers : ";
    for (int x = 0; x < n; x++)
        cin >> arr[x];
    if (isRepeating(n))
        cout << "True";
    else
        cout << "False";
    return 0;
}
bool isRepeating(int number)
{
    bool flag = false;
    int length, y = 0;
    cout << "Enter length of cycle : ";
    cin >> length;
    if (length > number)
    {
        flag = true;
        return flag;
    }
    for (int x = 0; x < length; x = x + 1)
    {
        if (arr[y] != arr[y + length])
        {
            flag = false;
            return flag;
        }
        else
            flag = true;
        y++;
    }
    return flag;
}