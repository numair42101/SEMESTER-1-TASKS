#include <iostream>
using namespace std;
int triangle(int nooftriangle)
{
    int dots = 0;
    for (int i = 1; i <= nooftriangle; i++)
        dots = dots + i;
    return dots;
}
int main()
{
    int nooftriangle, dots;
    cout << "Enter number of triangle : ";
    cin >> nooftriangle;
    cout << "Dots in triangle are " << triangle(nooftriangle);
    return 0;
}