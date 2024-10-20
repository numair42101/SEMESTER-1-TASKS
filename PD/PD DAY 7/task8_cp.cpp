#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float cargo, tonnage, totaltonnage = 0, minibus = 0, truck = 0, train = 0;
    float averageprice;
    cout << "Enter the count of cargo: ";
    cin >> cargo;
    for (int i = 1; i <= cargo; i++)
    {
        cout << "Enter the tonnage of cargo " << i << " : ";
        cin >> tonnage;
        totaltonnage = totaltonnage + tonnage;
        if (tonnage <= 3)
            minibus = minibus + tonnage;
        else if (tonnage > 3 && tonnage <= 11)
            truck = truck + tonnage;
        else if (tonnage > 11)
            train = train + tonnage;
    }
    averageprice = ((minibus * 200) + (truck * 175) + (train * 120)) / totaltonnage;
    cout << fixed << setprecision(2) << averageprice << endl;
    cout << "percentage of minibus : " << fixed << setprecision(2) << minibus / totaltonnage * 100 << "%" << endl;
    cout << "percentage of truck : " << fixed << setprecision(2) << truck / totaltonnage * 100 << "%" << endl;
    cout << "percentage of train : " << fixed << setprecision(2) << train / totaltonnage * 100 << "%" << endl;

    return 0;
}