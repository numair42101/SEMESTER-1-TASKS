#include <iostream>
using namespace std;

void printmenu();
void calculateagreegate(string name, float matricmarks, float intermarks, float ecatmarks);
void comparemarks(string namestd1, int ecatmarksstd1, string namestd2, int ecatmarksstd2);

main()
{
    string name, namestd1, namestd2;
    float matricmarks, intermarks, ecatmarks;
    int input, ecatmarksstd1, ecatmarksstd2;

    printmenu();
    while (true)
    {
        cout << endl << "Select Function : ";
        cin >> input;

        if (input == 1)
        {
            cout << "Enter your name : ";
            cin >> name;
            cout << "Enter your matric marks : ";
            cin >> matricmarks;
            cout << "Enter your inter marks : ";
            cin >> intermarks;
            cout << "Enter your ecat marks : ";
            cin >> ecatmarks;
            calculateagreegate(name, matricmarks, intermarks, ecatmarks);
        }
        else if (input == 2)
        {
            comparemarks(namestd1, ecatmarksstd1, namestd1, ecatmarksstd2);
        }
        else
        {
            cout << "Wrong input";
        }
    }
}

void printmenu()
{
    cout << "##################################################################" << endl;
    cout << "                  ##     ##    #######    ############                      " << endl;
    cout << "                  ##     ##    ##              ##                           " << endl;
    cout << "                  ##     ##    ##              ##                           " << endl;
    cout << "                  ##     ##    #######         ##                           " << endl;
    cout << "                  ##     ##    ##              ##                           " << endl;
    cout << "                  ##     ##    ##              ##                           " << endl;
    cout << "                  #########    #######         ##                           " << endl;
    cout << "##################################################################" << endl;
    cout << endl;
    cout << "1.Calculate Agreegate" << endl;
    cout << "2.Compare Marks" << endl;
}

void calculateagreegate(string name, float matricmarks, float intermarks, float ecatmarks)
{
    float obtainedmarks, agreegate, matricperc, interperc, ecatperc;
    matricperc = (matricmarks / 1100) * 100;
    interperc = (intermarks / 550) * 100;
    ecatperc = (ecatmarks / 400) * 100;
    agreegate = (matricperc * .3) + (interperc * .3) + (ecatperc * .4);
    cout << "Agreegate is " << agreegate << "%";
}

void comparemarks(string namestd1, int ecatmarksstd1, string namestd2, int ecatmarksstd2)
{
    cout << "Enter name of student : ";
    cin >> namestd1;
    cout << "Enter ecat marks of student : ";
    cin >> ecatmarksstd1;

    cout << "Enter name of student : ";
    cin >> namestd2;
    cout << "Enter ecat marks of student : ";
    cin >> ecatmarksstd2;

    if (ecatmarksstd1 > ecatmarksstd2)
    {
        cout << namestd1 << " has high marks";
    }
    else if (ecatmarksstd1 < ecatmarksstd2)
    {
        cout << namestd2 << " has high marks";
    }
    else if (ecatmarksstd1 == ecatmarksstd2)
    {
        cout << "Both has equal marks";
    }
    else
    {
    }
}