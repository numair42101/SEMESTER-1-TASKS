#include<iostream>
using namespace std;
main(){

float i,p;
cout<<"Enter Imposter Count : ";
cin>>i;
cout<<"Enter Player Count : ";
cin>>p;
cout<<"Chance of being Imposter : "<<(i/p)*100<<"%";
}