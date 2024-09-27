#include <iostream>
using namespace std;

void flowershop(int redRose, int whiteRose, int tulip);

main()
{
    int redrose, whiterose, tulips;
    cout << "Red rose: ";
    cin >> redrose;
    cout << "White rose: ";
    cin >> whiterose;
    cout << "tulips: ";
    cin >> tulips;
    flowershop(redrose, whiterose, tulips);
}

void flowershop(int redRose, int whiteRose, int tulip)
{
    float originalprice, discount;
    originalprice = (redRose * 2.0) + (whiteRose * 4.1) + (tulip * 2.5);
    discount = originalprice / 5;
    if (originalprice > 200)
    {
        cout << "original price: " << originalprice;
        cout << "Price after Discount: " << originalprice - discount << endl;
    }
    else
    {
        cout << "original price: " << originalprice;
        cout << "No Diacount";
    }
}