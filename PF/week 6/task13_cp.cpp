#include <iostream>
using namespace std;
float lowestprice(float distance, string time)
{
    float trainbill, busbill, taxibill;
    if (distance >= 100)
    {
        return distance * 0.06;
    }
    if (distance >= 20)
    {
        return distance * 0.09;
    }
    if (time == "day")
    {
        return (distance * 0.79) + 0.7;
    }
    else if (time == "night")
    {
        return (distance * 0.90) + 0.7;
    }
}
int main()
{
    float distance;
    string time;
    cout << "Enter number of kilometers:";
    cin >> distance;
    cout << "Enter time (day/night):";
    cin >> time;
    cout << "Lowest price is " << lowestprice(distance, time)<<" EUR";
}