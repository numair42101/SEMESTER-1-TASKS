#include <iostream>
#include <windows.h>
using namespace std;

void printmap();
void gotoxy(int x, int y);
void printplayer(int x, int y);
void eraseplayer(int x, int y);
void printenemy1(int x, int y);
void eraseenemy1(int x, int y);
void printenemy2(int x, int y);
void eraseenemy2(int x, int y);
void printenemy3(int x, int y);
void eraseenemy3(int x, int y);

int main()
{
    int i,e1dx=1,e2dy=1,e3dx=1,e3dy=1;
    int px = 45, py = 16;
    int e1x = 45, e1y = 2;
    int e2x = 90, e2y = 2;
    int e3x = 2, e3y = 31;

    system("cls");
    printmap();
    printplayer(px, py);
    printenemy1(e1x, e1y);
    printenemy2(e2x, e2y);
    printenemy3(e3x, e3y);
    while (true)
    {
        gotoxy(e1x, e1y);
        eraseenemy1(e1x, e1y);
        e1x = e1x + e1dx;
        if (e1x<=1)
            e1dx=1;
        else if (e1x>=91)
            e1dx=-1;
        gotoxy(e1x, e1y);
        printenemy1(e1x, e1y);
        Sleep(25);


        gotoxy(e2x, e2y);
        eraseenemy2(e2x, e2y);
        e2y = e2y + e2dy;
        if (e2y<=1)
            e2dy=1;
        else if (e2y>=32)
            e2dy=-1;
        gotoxy(e2x, e2y);
        printenemy1(e2x, e2y);
        Sleep(25);


        gotoxy(e3x, e3y);
        eraseenemy3(e3x, e3y);
        e3x = e3x + e3dx;
        e3y = e3y + e3dy;

        if (e3x <= 1)
            e3dx = 1;
        else if (e3x >= 91)
            e3dx = -1;

        if (e3y <= 1)
            e3dy = 1;
        else if (e3y >= 32)
            e3dy = -1;

        gotoxy(e3x, e3y);
        printenemy3(e3x, e3y);
        Sleep(25);


        if (GetAsyncKeyState(VK_LEFT))
        {
            gotoxy(px, py);
            eraseplayer(px, py);
            if (px > 1)
                px = px - 1;
            gotoxy(px, py);
            printplayer(px, py);
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            gotoxy(px, py);
            eraseplayer(px, py);
            if (px < 89)
                px = px + 1;
            gotoxy(px, py);
            printplayer(px, py);
        }
        if (GetAsyncKeyState(VK_UP))
        {
            gotoxy(px, py);
            eraseplayer(px, py);
            if (py > 1)
                py = py - 1;
            gotoxy(px, py);
            printplayer(px, py);
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            gotoxy(px, py);
            eraseplayer(px, py);
            if (py < 30)
                py = py + 1;
            gotoxy(px, py);
            printplayer(px, py);
        }
        if (GetAsyncKeyState(VK_UP) && GetAsyncKeyState(VK_RIGHT))
        {
            gotoxy(px, py);
            eraseplayer(px, py);
            if ((py > 1) && (px < 89))
            {
                py = py - 1;
                px = px + 1;
            }
            gotoxy(px, py);
            printplayer(px, py);
        }
        if (GetAsyncKeyState(VK_UP) && GetAsyncKeyState(VK_LEFT))
        {
            gotoxy(px, py);
            eraseplayer(px, py);
            if ((py > 1) && (px > 1))
            {
                py = py - 1;
                px = px - 1;
            }
            gotoxy(px, py);
            printplayer(px, py);
        }
        if (GetAsyncKeyState(VK_DOWN) && GetAsyncKeyState(VK_RIGHT))
        {
            gotoxy(px, py);
            eraseplayer(px, py);
            if ((py < 30) && (px < 89))
            {
                py = py + 1;
                px = px + 1;
            }
            gotoxy(px, py);
            printplayer(px, py);
        }
        if (GetAsyncKeyState(VK_DOWN) && GetAsyncKeyState(VK_LEFT))
        {
            gotoxy(px, py);
            eraseplayer(px, py);
            if ((py < 30) && (px > 1))
            {
                py = py + 1;
                px = px - 1;
                gotoxy(px, py);
                printplayer(px, py);
            }
        }
        Sleep(25);
    }
}

void printmap()
{
    cout << "###############################################################################################" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "#                                                                                             #" << endl;
    cout << "###############################################################################################" << endl;
}
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void printplayer(int x, int y)
{
    gotoxy(x, y);
    cout << " # # " << endl;
    gotoxy(x, y + 1);
    cout << "#####" << endl;
    gotoxy(x, y + 2);
    cout << "#####" << endl;
    gotoxy(x, y + 3);
    cout << "#####" << endl;
}
void eraseplayer(int x, int y)
{
    gotoxy(x, y);
    cout << "     " << endl;
    gotoxy(x, y + 1);
    cout << "     " << endl;
    gotoxy(x, y + 2);
    cout << "     " << endl;
    gotoxy(x, y + 3);
    cout << "     " << endl;
}
void printenemy1(int x, int y)
{
    gotoxy(x, y);
    cout << "###" << endl;
    gotoxy(x, y + 1);
    cout << "###" << endl;
}
void eraseenemy1(int x, int y)
{
    gotoxy(x, y);
    cout << "   " << endl;
    gotoxy(x, y + 1);
    cout << "   " << endl;
}
void printenemy2(int x, int y)
{
    gotoxy(x, y);
    cout << "***" << endl;
    gotoxy(x, y + 1);
    cout << "***" << endl;
}
void eraseenemy2(int x, int y)
{
    gotoxy(x, y);
    cout << "   " << endl;
    gotoxy(x, y + 1);
    cout << "   " << endl;
}
void printenemy3(int x, int y)
{
    gotoxy(x, y);
    cout << "+++" << endl;
    gotoxy(x, y + 1);
    cout << "+++" << endl;
}
void eraseenemy3(int x, int y)
{
    gotoxy(x, y);
    cout << "   " << endl;
    gotoxy(x, y + 1);
    cout << "   " << endl;
}
