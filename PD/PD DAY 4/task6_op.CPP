#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);

main()
{
    system("cls");

    cout << "H";
    gotoxy(0, 1);
    cout << "A";
    gotoxy(0, 2);
    cout << "S";
    gotoxy(0, 3);
    cout << "S";
    gotoxy(0, 4);
    cout << "A";
    gotoxy(0, 5);
    cout << "N";
    gotoxy(0, 6);
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}