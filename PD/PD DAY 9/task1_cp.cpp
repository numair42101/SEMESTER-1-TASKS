#include <iostream>
using namespace std;
int main()
{
    string fruits[4] = {"peach", "apple", "guava", "watermelon"};
    int fruit, quantity, prices[4] = {60, 70, 40, 30};
    cout << "Please select a fruit from the following options: " << endl;
    for (int i = 0; i < 4; i++)
        cout << i + 1 << ". " << fruits[i] << endl;
    cout << "Enter the number of the fruit you want to buy: ";
    cin >> fruit;
    if (fruit >= 1 && fruit <= 4)
    {
        cout << "Enter the quantity of the fruit you want to buy: ";
        cin >> quantity;
        if (quantity > 0)
            cout << "The total cost of the fruit is: " << quantity * prices[fruit - 1] << endl;
        else
            cout << "Invalid quantity. Please enter a positive number." << endl;
    }
    else
        cout << "Invalid fruit number. Please enter a number between 1 and 4." << endl;
    return 0;
}