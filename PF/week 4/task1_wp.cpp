#include<iostream>
using namespace std;

void calculator();

main(){
calculator();

}

void calculator(){
int num1,num2;
char op;
cout<<"Enter first number : ";
cin>>num1;
cout<<"Enter second number : ";
cin>>num2;
cout<<"Enter operator(+) : ";
cin>>op;
if(op=='+'){
cout<<"Sum is "<<num1+num2;
}
}