#include <iostream>
#include <stdlib.h>
using namespace std;

void printheader();
void printmainmenu();
int selectaccounttype();
void accounttype(int selectaccount);
int selectaccountaction();
void accountaction(int selectaccountaction);

int main()
{
    system("cls");
    printheader();
    printmainmenu();
    accounttype(selectaccounttype());
}

void printheader()
{
    cout << "" << endl;
    cout << "   _____ ____   __  __ ____  _____  ______     __  ___ ___     _   __ ___    ______ ______ __  ___ ______ _   __ ______     _______  __ _____ _____ ______ __  ___        " << endl;
    cout << "  / ___// __ \\ / / / // __ \\/ ___/ / ____/    /  |/  //   |   / | / //   |  / ____// ____//  |/  // ____// | / //_  __/    / ___/\\ \\/ // ___//_  _// ____//  |/  /    " << endl;
    cout << " / /   / / / // / / // /_/ /\\__ \\ / __/      / /|_/ // /| |  /  |/ // /| | / / __ / __/  / /|_/ // __/  /  |/ /  / /       \\__ \\  \\  / \\__\\   / / / __/  / /|_/ /  " << endl;
    cout << "/ /___/ /_/ // /_/ // _, _/___/ // /___     / /  / // ___ | / /|  // ___ |/ /_/ // /___ / /  / // /___ / /|  /  / /       ___/ /  / /___/ /  / / / /___ / /  / /          " << endl;
    cout << "\\____/\\____/ \\____//_/ |_|/____//_____/    /_/  /_//_/  |_|/_/ |_//_/  |_|\\____//_____//_/  /_//_____//_/ |_/  /_/       /____/  /_//____/  /_/ /_____//_/  /_/       " << endl;
    cout << "******************************************************************************************************************************************************************        " << endl;
    cout << "" << endl;
}
void printmainmenu()
{
    int selectaccount;
    cout << "1. STUDENT ACCOUNT" << endl;
    cout << "2. TEACHER ACCOUNT" << endl;
    cout << "3. ADMINISTRATOR ACCOUNT" << endl;
}
int selectaccounttype()
{
    int selectaccount;
    cout << "Select your account or exit(0): ";
    cin >> selectaccount;
    return selectaccount;
}
void accounttype(int selectaccount)
{
    if (selectaccount == 0)
    {
        system("cls");
        exit(0);
    }
    else if (selectaccount == 1)
    {
        system("cls");
        printheader();
        cout << "1. SIGN UP" << endl;
        cout << "2. SIGN IN" << endl;
        cout << "3. BACK" << endl;
        accountaction(selectaccountaction());
    }
    else if (selectaccount == 2)
    {
        system("cls");
        printheader();
        cout << "1. SIGN UP" << endl;
        cout << "2. SIGN IN" << endl;
        cout << "3. BACK" << endl;
        accountaction(selectaccountaction());
    }
    else if (selectaccount == 3)
    {
        system("cls");
        printheader();
        cout << "1. SIGN UP" << endl;
        cout << "2. SIGN IN" << endl;
        cout << "3. BACK" << endl;
        accountaction(selectaccountaction());
    }
    else
    {
        cout << "invalid";
    }
}
int selectaccountaction()
{
    int selectaccountaction;
    cout << "What do you want..." << endl;
    cin >> selectaccountaction;
    return selectaccountaction;
}
void accountaction(int selectaccountaction)
{
    if (selectaccountaction == 1)
    {
        system("cls");
        printheader();
        cout << "~~~CREATING YOUR ACCOUNT~~~" << endl;
    }
    else if (selectaccountaction == 2)
    {
        system("cls");
        printheader();
        cout << "~~~ACCESSING YOUR ACCOUNT~~~" << endl;
    }
    else if (selectaccountaction == 3)
    {
        system("cls");
        printheader();
        printmainmenu();
        accounttype(selectaccounttype());
    }
    else
    {
        cout << "invalid";
    }
}
