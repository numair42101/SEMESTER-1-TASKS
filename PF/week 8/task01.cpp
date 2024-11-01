#include <iostream>
using namespace std;

bool doesbrickfit(int bricklength, int brickwidth, int brickheight, int holewidth, int holeheight)
{
    return ((bricklength == holewidth && brickwidth == holeheight) ||
            (bricklength == holeheight && brickwidth == holewidth) ||
            (bricklength == holewidth && brickheight == holeheight) ||
            (bricklength == holeheight && brickheight == holewidth) ||
            (brickwidth == holewidth && brickheight == holeheight) ||
            (brickwidth == holeheight && brickheight == holewidth));
}

int main()
{
    int bricklength, brickwidth, brickheight, holewidth, holeheight;
    cout << "Enter the length of the brick: ";
    cin >> bricklength;
    cout << "Enter the width of the brick: ";
    cin >> brickwidth;
    cout << "Enter the height of the brick: ";
    cin >> brickheight;
    cout << "Enter the width of the hole: ";
    cin >> holewidth;
    cout << "Enter the height of the hole: ";
    cin >> holeheight;
    cout << doesbrickfit(bricklength, brickwidth, brickheight, holewidth, holeheight);
    return 0;
}