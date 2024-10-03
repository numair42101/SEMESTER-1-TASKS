#include <iostream>
using namespace std;
void claculatepoolstate(int v, int p1, int p2, float h);
int main()
{
    int v, p1, p2;
    float h;
    cout << "Enter the volumr of pool in liters: ";
    cin >> v;
    cout << "Enter flow rate of first pipe per hour: ";
    cin >> p1;
    cout << "Enter flow rate of second pipe per hour: ";
    cin >> p2;
    cout << "Enter hours that the worker is absent : ";
    cin >> h;
    claculatepoolstate(v, p1, p2, h);
}
void claculatepoolstate(int v, int p1, int p2, float h)
{
    float pool, pipe1, pipe2;
    pool = (p1 * h) + (p2 * h);
    pipe1 = (p1 * h) / pool;
    pipe2 = (p2 * h) / pool;
    if (pool > v)
    {
        cout << "For " << h << " hours, the pool overflows with " << pool - v << " liters";
    }
    if (pool <= v)
    {
        cout << "The pool is " << (pool / v) * 100 << "% full." << " Pipe 1: " << pipe1 * 100 << "% Pipe 2: " << pipe2 * 100 << "%";
    }
}