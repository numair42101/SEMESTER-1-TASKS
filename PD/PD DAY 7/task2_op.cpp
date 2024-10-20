#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
void printstar(int rows)
{
    gotoxy(0, 5);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (rows + 1) / 2; j++)
            cout << "*";
        cout << endl;
    }
}
void printspace(int rows)
{
    gotoxy(0, 5);
    for (int i = 1; i <= (rows - 1) / 2; i++)
    {
        for (int j = (rows - 1) / 2; j >= i; j--)
            cout << " ";
        cout << endl;
    }
    gotoxy(0, ((rows + 2) / 2)+5);
    for (int i = 1; i <= (rows + 1) / 2; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << " ";
        cout << endl;
    }
}
int main()
{
    system("cls");
    int rows;
    cout << "Enter the desired number of rows: ";
    cin >> rows;
    printstar(rows);
    printspace(rows);
    return 0;
}