#include <iostream>
using namespace std;

int pilecubes(long long int totalvolume)
{
    long long int sum = 0, count = 0, i = 1;
    while (true)
    {
        sum = ((i * (i + 1)) / 2) * ((i * (i + 1)) / 2);
        count++;
        i++;
        if (sum == totalvolume)
            return count;
        else if (sum > totalvolume)
            return -1;
    }
}

int main()
{
    long long int totalvolume;
    cout << "Enter the total volume of the building: ";
    cin >> totalvolume;
    cout << pilecubes(totalvolume);

    return 0;
}