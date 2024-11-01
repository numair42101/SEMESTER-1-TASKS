#include <iostream>
using namespace std;

string plant(string seed, int water, int fert, int temp)
{
    string result;
    for (int i = 1; i <= water; i++)
    {
        for (int w = 1; w <= water; w++)
            result = result + "-";
        if (temp >= 20 && temp <= 30)
        {
            for (int f = 1; f <= fert; f++)
                result = result + seed;
        }
    }
    if (!(temp >= 20 && temp <= 30))
        result = result + seed;

    return result;
}

int main()
{
    string seed;
    int water, fert, temp;
    cout << "Enter the seed name: ";
    cin >> seed;
    cout << "Enter water: ";
    cin >> water;
    cout << "Enter fertilizer: ";
    cin >> fert;
    cout << "Enter temperature: ";
    cin >> temp;
    cout << plant(seed, water, fert, temp);

    return 0;
}