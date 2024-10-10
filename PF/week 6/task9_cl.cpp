#include <iostream>
using namespace std;
string checktitle(char gender, int age)
{
    if (gender == 'm')
    {
        if (age >= 16)
            return "Mr.";
        else
            return "Master.";
    }
    else if (gender == 'f')
    {
        if (age >= 16)
            return "Ms.";
        else
            return "Miss.";
    }
}
int main()
{
    int age;
    char gender;
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter your gender (m/f):";
    cin >> gender;
    cout << checktitle(gender, age);
}