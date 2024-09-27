#include <iostream>
using namespace std;

void calculateprice(string country, float ticketprice);

main()
{
    string country;
    float ticketprice;
    cout << "Enter country name : ";
    cin >> country;
    cout << "Enter ticket price : ";
    cin >> ticketprice;

    calculateprice(country, ticketprice);
}

void calculateprice(string country, float ticketprice)
{
    float finalprice;

    if (country == "pakistan")
    {
        finalprice = ticketprice - (ticketprice / 20);
        cout << "final price is " << finalprice;
    }
    else if (country == "ireland")
    {
        finalprice = ticketprice - (ticketprice / 10);
        cout << "final price is " << finalprice;
    }
    else if (country == "india")
    {
        finalprice = ticketprice - (ticketprice / 5);
        cout << "final price is " << finalprice;
    }
    else if (country == "england")
    {
        finalprice = ticketprice - (ticketprice * .3);
        cout << "final price is " << finalprice;
    }
    else if (country == "canada")
    {
        finalprice = ticketprice - (ticketprice * .45);
        cout << "final price is " << finalprice;
    }
    else
    {
        cout << "wrong country";
    }
}