#include <iostream>
using namespace std;
void claculatepoolstate(int volume,int ratepipe1,int ratepipe2,float hours);
int main()
{
    int volume, ratepipe1,ratepipe2;
    float hours;
    cout << "Enter the volumr of pool in liters: ";
    cin >> volume;
    cout << "Enter flow rate of first pipe per hour: ";
    cin >> ratepipe1;
    cout << "Enter flow rate of second pipe per hour: ";
    cin >> ratepipe2;
    cout << "Enter hours that the worker is absent : ";
    cin >> hours;
    claculatepoolstate(volume, ratepipe1, ratepipe2, hours);
}
void claculatepoolstate(int volume,int ratepipe1,int ratepipe2,float hours)
{
    float pool, pipe1, pipe2;
    pool = (ratepipe1 * hours) + (ratepipe2 * hours);
    pipe1 = (ratepipe1 * hours) / pool;
    pipe2 = (ratepipe2 * hours) / pool;
    if (pool > volume)
    {
        cout << "For " << hours << " hours, the pool overflows with " << pool - volume << " liters";
    }
    if (pool <= volume)
    {
        cout << "The pool is " << (pool / volume) * 100 << "% full." << " Pipe 1: " << pipe1 * 100 << "% Pipe 2: " << pipe2 * 100 << "%";
    }
}