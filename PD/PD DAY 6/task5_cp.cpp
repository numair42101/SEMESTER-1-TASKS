#include <iostream>
using namespace std;
float calculatefruitprice(string fruit, string dayofweek, double quantity)
{
    float totalcost, banana, apple, orange, grapefruit, kiwi, pineapple, grapes;
    if ((dayofweek == "saturday") || (dayofweek == "sunday"))
    {
        banana = 2.70;
        apple = 1.25;
        orange = 0.90;
        grapefruit = 1.60;
        kiwi = 3.00;
        pineapple = 5.60;
        grapes = 4.20;
    }
    else if ((dayofweek == "monday") || (dayofweek == "tuesday") || (dayofweek == "wednesday") || (dayofweek == "thursday") || (dayofweek == "friday"))
    {
        banana = 2.50;
        apple = 1.20;
        orange = 0.85;
        grapefruit = 1.45;
        kiwi = 2.70;
        pineapple = 5.50;
        grapes = 3.85;
    }
    else
        return 0.0;

    if (fruit == "banana")
        totalcost = quantity * banana;
    else if (fruit == "apple")
        totalcost = quantity * apple;
    else if (fruit == "orange")
        totalcost = quantity * orange;
    else if (fruit == "grapefruit")
        totalcost = quantity * grapefruit;
    else if (fruit == "kiwi")
        totalcost = quantity * kiwi;
    else if (fruit == "pineapple")
        totalcost = quantity * pineapple;
    else if (fruit == "grapes")
        totalcost = quantity * grapes;
    return totalcost;
}
int main()
{
    string fruit, dayofweek;
    double quantity;
    cout << "Enter fruit name:";
    cin >> fruit;
    cout << "Enter day of week:";
    cin >> dayofweek;
    cout << "Enter quantity:";
    cin >> quantity;
    if (calculatefruitprice(fruit, dayofweek, quantity) == 0.0)
        cout << "invalid entry";
    else
        cout << calculatefruitprice(fruit, dayofweek, quantity);
}