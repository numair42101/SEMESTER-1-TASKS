#include <iostream>
using namespace std;

string calculatehotalprices(string month, int noofdays)
{
    float studio, apartment, studiocost, apartmentcost;
    if ((month == "may") || (month == "october"))
    {
        studio = 50.0;
        apartment = 65.0;
        studiocost=noofdays*studio;
        apartmentcost=noofdays*apartment;
        if(noofdays>14){
            studiocost=studiocost-(studiocost*0.3);
            apartmentcost=apartmentcost-(apartmentcost*0.1);
        }else if(noofdays>7){
            studiocost=studiocost-(studiocost*0.05);
        }
    }
    else if ((month == "june") || (month == "september"))
    {
        studio=75.2;
        apartment=68.7;
        studiocost=noofdays*studio;
        apartmentcost=noofdays*apartment;
        if(noofdays>14){
            studiocost=studiocost-(studiocost*0.2);
            apartmentcost=apartmentcost-(apartmentcost*0.1);
        }
    }
    else if ((month == "july") || (month == "august"))
    {
        studio=76.0;
        apartment=77.0;
        studiocost=noofdays*studio;
        apartmentcost=noofdays*apartment;
        if(noofdays>14){
            apartmentcost=apartmentcost-(apartmentcost*0.1);
        }
    }
return "Apartment:" + to_string(apartmentcost) + "$\nStudio:" + to_string(studiocost) + "$\n";
}
int main()
{
    string month;
    int noofdays;
    cout << "Enter the month:";
    cin >> month;
    cout << "Enter the number of stays:";
    cin >> noofdays;
    cout << calculatehotalprices(month, noofdays);
}