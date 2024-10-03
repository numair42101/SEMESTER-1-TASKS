#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, discriminant, root1, root2;
    cout << "Enter the vale of a: ";
    cin >> a;
    cout << "Enter the vale of b: ";
    cin >> b;
    cout << "Enter the vale of c:";
    cin >> c;
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Complex solution: x = " << root1 << " and x =" << root2;
    }
    if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        root2 = -b / (2 * a);
        cout << "Complex solution: x = " << root1 << " and x =" << root2;
    }
    if (discriminant < 0)
    { 
        cout<<"Complex solution: x = "<<(-b/(2*a)) <<"+"<<(sqrt(-1*discriminant))/(2*a)<<"i and x ="<<-b/(2*a)<<"-" <<(sqrt(-1*discriminant))/(2*a)<<"i";
    }
}