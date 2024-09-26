#include<iostream>
using namespace std;

void calculatefuel(float distance);

main(){
float distance;
cout<<"Enter distance : ";
cin>>distance;
calculatefuel(distance);

}

void calculatefuel(float distance){
float fuel;
fuel = distance*10;
cout<<"The fuel used is "<<fuel;
}