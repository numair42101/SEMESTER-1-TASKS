#include <iostream>
using namespace std;
float calculatetax(float priceofvehical, char codeofvehical);
int main()
{
    float priceofvehical, finalprice;
    char codeofvehical;
    cout << "Enter the vehical type code (M,E,S,V,T): ";
    cin >> codeofvehical;
    cout << "Enter the price of vehical: $";
    cin >> priceofvehical;
    finalprice = priceofvehical + calculatetax(priceofvehical, codeofvehical);
    cout << "The final price of the vehical of type " << codeofvehical << " after adding the tax is $" << finalprice;
}
float calculatetax(float priceofvehical, char codeofvehical)
{
    float taxamount;
    if (codeofvehical == 'M')
    {
        taxamount = (priceofvehical * 6) / 100;
        return taxamount;
    }
    if (codeofvehical == 'E')
    {
        taxamount = (priceofvehical * 8) / 100;
        return taxamount;
    }
    if (codeofvehical == 'S')
    {
        taxamount = (priceofvehical * 10) / 100;
        return taxamount;
    }
    if (codeofvehical == 'V')
    {
        taxamount = (priceofvehical * 12) / 100;
        return taxamount;
    }
    if (codeofvehical == 'T')
    {
        taxamount = (priceofvehical * 15) / 100;
        return taxamount;
    }
}