#include <iostream>
using namespace std;
float totalincome(string tickettype, int rows, int columns)
{
    float totalincome;
    if (tickettype == "premier")
    {
        totalincome = rows * columns * 12.00;
    }
    else if (tickettype == "normal")
    {
        totalincome = rows * columns * 7.50;
    }
    else if (tickettype == "discount")
    {
        totalincome = rows * columns * 5.00;
    }
    return totalincome;
}
int main()
{
    string tickettype;
    int rows, columns;
    cout << "Enter the ticket type (premier/normal/discount):";
    cin >> tickettype;
    cout << "Enter the number of rows:";
    cin >> rows;
    cout << "Enter the number of columns:";
    cin >> columns;
    cout << totalincome(tickettype, rows, columns);
}