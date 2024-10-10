#include <iostream>
using namespace std;
string claculatecost(float budget, string category, int numpeople)
{
    float transportcost, ticketcost, totalcost;
    if ((numpeople >= 1) && (numpeople <= 4))
    {
        transportcost = (budget * 3) / 4;
    }
    else if ((numpeople >= 5) && (numpeople <= 9))
    {
        transportcost = (budget * 3) / 5;
    }
    else if ((numpeople >= 10) && (numpeople <= 24))
    {
        transportcost = (budget) / 2;
    }
    else if ((numpeople >= 25) && (numpeople <= 49))
    {
        transportcost = (budget * 2) / 5;
    }
    else if (numpeople >= 50)
    {
        transportcost - budget / 4;
    }

    if (category == "vip")
    {
        ticketcost = 499.99 * numpeople;
    }
    else if (category == "normal")
    {
        ticketcost = 249.99 * numpeople;
    }
    totalcost = transportcost + ticketcost;
    if (totalcost > budget)
    {
        return "Not enough money! You need " + to_string(totalcost - budget) + " leva";
    }
    else if (totalcost < budget)
    {
        return "Yes! You have " + to_string(budget - totalcost) + "leva left ";
    }
}
int main()
{
    float budget;
    string category;
    int numpeople;
    cout << " Enter the budget : ";
    cin >> budget;
    cout << " Enter the category(vip / normal) : ";
    cin >> category;
    cout << " Enter number of peoples in the group : ";
    cin >> numpeople;
    cout << claculatecost(budget, category, numpeople);
}