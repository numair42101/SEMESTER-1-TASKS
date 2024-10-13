#include <iostream>
using namespace std;

string decideactivity(string temprature, string humidity)
{
    if ((temprature == "warm") && (humidity == "dry"))
        return "Play tennis";
    else if ((temprature == "warm") && (humidity == "humid"))
        return "Swim";
    else if ((temprature == "cold") && (humidity == "dry"))
        return "Play basketball";
    else if ((temprature == "cold") && (humidity == "humid"))
        return "Watch TV";
}

int main()
{
    string temprature, humidity;
    cout << "Enter temprature (warm or cold):";
    cin >> temprature;
    cout << "Enter humidity (dry or humid):";
    cin >> humidity;
    cout << "Recommended activity: " << decideactivity(temprature, humidity);
}