#include<iostream>
using namespace std;
main(){

int number,a,b,c,d,sum;
cout<<"Enter any 4-digit number : ";
cin>>number;

a = number/1000;
b = (number/100)%10;
c = (number/10)%10;
d = (number/1)%10;

sum = a+b+c+d;

cout<<"Sum of individual digits : "<<sum;


}