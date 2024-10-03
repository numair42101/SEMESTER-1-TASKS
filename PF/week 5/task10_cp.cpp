#include <iostream>
using namespace std;

void numtotext(int num);

int main()
{
    int number;
    cout << "Enter any number (1-99) : ";
    cin >> number;
    numtotext(number);
}

void numtotext(int num)
{
    if (num < 20)
    {
        if (num == 1)
            cout << "one";
        else if (num == 2)
            cout << "two";
        else if (num == 3)
            cout << "three";
        else if (num == 4)
            cout << "four";
        else if (num == 5)
            cout << "five";
        else if (num == 6)
            cout << "six";
        else if (num == 7)
            cout << "seven";
        else if (num == 8)
            cout << "eight";
        else if (num == 9)
            cout << "nine";
        else if (num == 10)
            cout << "ten";
        else if (num == 11)
            cout << "eleven";
        else if (num == 12)
            cout << "twelve";
        else if (num == 13)
            cout << "thirteen";
        else if (num == 14)
            cout << "fourteen";
        else if (num == 15)
            cout << "fifteen";
        else if (num == 16)
            cout << "sixteen";
        else if (num == 17)
            cout << "seventeen";
        else if (num == 18)
            cout << "eighteen";
        else if (num == 19)
            cout << "nineteen";
    }
    else
    {
        if (num / 10 == 2)
            cout << "twenty";
        else if (num / 10 == 3)
            cout << "thirty";
        else if (num / 10 == 4)
            cout << "forty";
        else if (num / 10 == 5)
            cout << "fifty";
        else if (num / 10 == 6)
            cout << "sixty";
        else if (num / 10 == 7)
            cout << "seventy";
        else if (num / 10 == 8)
            cout << "eighty";
        else if (num / 10 == 9)
            cout << "ninety";
        if (num % 10 != 0)
        {
            if (num % 10 == 1)
                cout << "-one";
            else if (num % 10 == 2)
                cout << "-two";
            else if (num % 10 == 3)
                cout << "-three";
            else if (num % 10 == 4)
                cout << "-four";
            else if (num % 10 == 5)
                cout << "-five";
            else if (num % 10 == 6)
                cout << "-six";
            else if (num % 10 == 7)
                cout << "-seven";
            else if (num % 10 == 8)
                cout << "-eight";
            else if (num % 10 == 9)
                cout << "-nine";
        }
    }
    cout << endl;
}