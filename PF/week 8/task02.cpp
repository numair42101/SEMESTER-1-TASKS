#include <iostream>
using namespace std;

float calculatedamage(string mytype, string opponenttype, int attack, int defense)
{
    float effectiveness, damage;
    if (mytype == "fire" && opponenttype == "grass")
        effectiveness = 2;
    else if (mytype == "fire" && opponenttype == "fire")
        effectiveness = 1;
    else if (mytype == "fire" && opponenttype == "electric")
        effectiveness = 1;
    else if (mytype == "fire" && opponenttype == "water")
        effectiveness = 0.5;
    else if (mytype == "water" && opponenttype == "fire")
        effectiveness = 2;
    else if (mytype == "water" && opponenttype == "water")
        effectiveness = 1;
    else if (mytype == "water" && opponenttype == "grass")
        effectiveness = 0.5;
    else if (mytype == "water" && opponenttype == "electric")
        effectiveness = 0.5;
    else if (mytype == "grass" && opponenttype == "water")
        effectiveness = 2;
    else if (mytype == "grass" && opponenttype == "grass")
        effectiveness = 1;
    else if (mytype == "grass" && opponenttype == "fire")
        effectiveness = 0.5;
    else if (mytype == "grass" && opponenttype == "electric")
        effectiveness = 1;
    else if (mytype == "electric" && opponenttype == "water")
        effectiveness = 2;
    else if (mytype == "electric" && opponenttype == "fire")
        effectiveness = 1;
    else if (mytype == "electric" && opponenttype == "grass")
        effectiveness = 1;
    else if (mytype == "electric" && opponenttype == "electric")
        effectiveness = 1;
    damage = 50 * (attack / defense) * effectiveness;
    return damage;
}

int main()
{
    string mytype, opponenttype;
    int attack, defense;
    cout << "Enter your type: ";
    cin >> mytype;
    cout << "Enter opponent's type: ";
    cin >> opponenttype;
    cout << "Enter your attack: ";
    cin >> attack;
    cout << "Enter your defence: ";
    cin >> defense;
    cout << calculatedamage(mytype, opponenttype, attack, defense);
    return 0;
}