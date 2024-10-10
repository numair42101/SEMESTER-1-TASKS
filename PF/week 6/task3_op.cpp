#include <iostream>
using namespace std;
float calculateperimeter(char shape, float length)
{
    float perimeter;
    if (shape == 's')
        perimeter = 4.0 * length;
    if (shape == 'c')
        perimeter = 6.28 * length;
    if (shape == 't')
        perimeter = 3.0 * length;
    if (shape == 'h')
        perimeter = 6.0 * length;
    return perimeter;
}
int main()
{
    float length;
    char shape;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon):";
    cin >> shape;
    cout << "Enter the vlaue:";
    cin >> length;
    cout << calculateperimeter(shape, length);
}