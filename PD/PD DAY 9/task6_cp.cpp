#include <iostream>
using namespace std;
int main()
{
    int times, array[3];
    cout << "Enter 3 elements:" << endl;
    for (int i = 0; i < 3; i++)
        cin >> array[i];
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> times;
    for (int i = 0; i < 3; i++)
    {
        if (array[i] % 2 == 0)
            array[i] -= (2 * times);
        else
            array[i] += 2 * times;
    }
    cout << "After " << times << " times even-odd transformation: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << array[i];
        cout << " ";
    }

    // cout << array[0] << " " << array[1] << " " << array[2];

    return 0;
}