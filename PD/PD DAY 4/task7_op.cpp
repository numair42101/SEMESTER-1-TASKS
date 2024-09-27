#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printmaze();

main()
{
    int y;
    y = 1;
    system("cls");
    printmaze();

    while (true)
    {

        while (y != 14)
        {
            gotoxy(20, y);
            cout << "P";
            Sleep(100);
            gotoxy(20, y);
            cout << " ";
            y++;
        }

        while (y != 1)
        {
            gotoxy(20, y);
            cout << "P";
            Sleep(100);
            gotoxy(20, y);
            cout << " ";
            y--;
        }
    }
}

void printmaze()
{
    cout << "########################################" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "#                                      #" << endl;
    cout << "########################################" << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}