#include<iostream>
using namespace std;
int calculatePrice(int money, int year){
    int spend=0,age=18;
    for(int i=1800;i<=year;i++){
        if(i%2==0)
            spend=spend+12000;
        else
            spend=spend+12000+(50*age);
        age++;
    }
    return spend;
}
int main() {
    int money,year,spend;
    cout<<"Enter the money: ";
    cin>>money;
    cout<<"Enter year: ";
    cin>>year;
    spend=calculatePrice(money,year);
    // cout<<spend;
    if(spend<money)
        cout<<"Yes! He will live a carefree life and will have "<<money-spend<<" dollars left.";
    else if(money<spend)
        cout<<"He will need "<<spend-money<<" dollars to survive.";
    return 0;
}