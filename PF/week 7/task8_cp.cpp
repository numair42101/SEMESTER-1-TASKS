#include<iostream>
using namespace std;
int calculateMoney(int age, int machineprice, int toyprice){
    int toys,budget,cash=0;
    if(age%2==0)
        toys=age/2;
    else
        toys=(age/2)+1;
    for(int i=1;i<=age/2;i++){
        cash=cash+(i*10);
    }
    budget=(toys*toyprice)+(cash-(age/2));
    return budget;
}
int main() {
    int age,machineprice,toyprice,budget;
    cout<<"Enter Lilly's age: ";
    cin>>age;
    cout<<"Enter the price of washing machine: ";
    cin>>machineprice;
    cout<<"enter the unit price of each toy: ";
    cin>>toyprice;
    budget=calculateMoney(age,machineprice,toyprice);
    if(budget>machineprice)
        cout<<"Yes!"<<endl<<budget-machineprice;
    else if(budget<machineprice)
        cout<<"No!"<<endl<<machineprice-budget;   
    return 0;
}