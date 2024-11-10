#include <iostream>
using namespace std;
int main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int movie, price = 500;
    cout << "Please select a movie from the following options: " << endl;
    for (int i = 0; i <= 4; i++)
        cout << i << ". " << movies[i] << endl;
    cout << "Enter the number of the fruit you want to buy: ";
    cin >> movie;
    if (movie % 2 == 0)
        cout << "Price after discount is " << price - (price * .1) << endl;
    else
        cout << "Price after discount is " << price - (price * .05) << endl;

    return 0;
}