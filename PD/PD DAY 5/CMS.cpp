#include <iostream>
#include <stdlib.h>
using namespace std;

void printheader();
void printaccounttypes();
int selectaccounttype();
void printaccountactions();
int selectaccountaction();
void printaccountaction(int selectaccountaction, int accounttype);
void studentsignup();
void studentsignin();
void teachersignup();
void teachersignin();
void adminsignup();
void adminsignin();

int main()
{
    int accounttype, accountaction;
    system("cls");
    printheader();
    printaccounttypes();
    accounttype = selectaccounttype();
    if (accounttype == 0)
    {
        system("cls");
        exit(0);
    }
    else
        printaccountactions();
    accountaction = selectaccountaction();
    printaccountaction(accountaction, accounttype);
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
void printaccounttypes()
{
    cout << "1. STUDENT ACCOUNT" << endl;
    cout << "2. TEACHER ACCOUNT" << endl;
    cout << "3. ADMINISTRATOR ACCOUNT" << endl;
}
int selectaccounttype()
{
    int accounttype;
    cout << "Select your account or exit(0): ";
    cin >> accounttype;
    return accounttype;
}
void printaccountactions()
{
    system("cls");
    printheader();
    cout << "1. SIGN UP" << endl;
    cout << "2. SIGN IN" << endl;
    cout << "3. BACK" << endl;
}
int selectaccountaction()
{
    int accountaction;
    cout << "What do you want..." << endl;
    cin >> accountaction;
    return accountaction;
}
void studentsignup()
{
    string name, fathername, registrationnumber, password, cnic;
    char section;
    int age, rollno, session;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your father name : ";
    cin >> fathername;
    cout << "Enter your CNIC : ";
    cin >> cnic;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your session : ";
    cin >> session;
    cout << "Enter your section : ";
    cin >> section;
    cout << "Enter your rollno : ";
    cin >> rollno;
    cout << "Enter your registrationnumber : ";
    cin >> registrationnumber;
    cout << "Enter your password : ";
    cin >> password;
}
void studentsignin()
{
    string registrationnumber, password;
    cout << "Enter your registrationnumber : ";
    cin >> registrationnumber;
    cout << "Enter your password : ";
    cin >> password;
}
void teachersignup()
{
    string name, fathername, subject, cnic, password, email;
    int age, session;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your father name : ";
    cin >> fathername;
    cout << "Enter your CNIC : ";
    cin >> cnic;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your session (employed) : ";
    cin >> session;
    cout << "Enter your subject : ";
    cin >> subject;
    cout << "Enter your email : ";
    cin >> email;
    cout << "Enter your password : ";
    cin >> password;
}
void teachersignin()
{
    string email, password;
    cout << "Enter your email : ";
    cin >> email;
    cout << "Enter your password : ";
    cin >> password;
}
void adminsignup()
{
    string name, cnic, fathername, password, email;
    int age;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter your father name : ";
    cin >> fathername;
    cout << "Enter your CNIC : ";
    cin >> cnic;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your email : ";
    cin >> email;
    cout << "Enter your password : ";
    cin >> password;
}
void adminsignin()
{
    string email, password;
    cout << "Enter your email : ";
    cin >> email;
    cout << "Enter your password : ";
    cin >> password;
}
void printaccountaction(int accountaction, int accounttype)
{
    if (accountaction == 1)
    {
        system("cls");
        printheader();
        cout << "~~~CREATING YOUR ACCOUNT~~~" << endl
             << endl;
        if (accounttype = 1)
            studentsignup();
        else if (accounttype = 2)
            teachersignup();
        else if (accounttype = 3)
            adminsignup();
    }
    else if (accountaction == 2)
    {
        system("cls");
        printheader();
        cout << "~~~ACCESSING YOUR ACCOUNT~~~" << endl
             << endl;
        if (accounttype = 1)
            studentsignin();
        else if (accounttype = 2)
            teachersignin();
        else if (accounttype = 3)
            adminsignin();
    }
    else if (accountaction == 3)
    {
        system("cls");
        printheader();
        printaccounttypes();
        selectaccounttype();
        printaccountactions();
        selectaccountaction();
        printaccountaction(accountaction,accounttype);
    }
}



