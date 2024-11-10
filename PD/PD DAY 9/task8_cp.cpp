#include <iostream>
using namespace std;

int main()
{
    int colors, time = 0;
    cout << "Enter no of colors: ";
    cin >> colors;
    string colorarray[colors];
    cout << "Enter " << colors << " colors: ";
    for (int i = 0; i < colors; i++)
    {
        cin >> colorarray[i];
        time = time + 2;
        if ((i > 0) && (colorarray[i] != colorarray[i - 1]))
            time = time + 1;
    }
    cout << "Required time is " << time;
    return 0;
}