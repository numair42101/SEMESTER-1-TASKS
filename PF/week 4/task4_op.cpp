#include<iostream>
using namespace std;

void add(int num1,int num2);
void subtract(int num1,int num2);
void product(int num1,int num2);
void divide(int num1,int num2);

main(){
int num1,num2;
char op;
cout<<"Enter first number : ";
cin>>num1;
cout<<"Enter second number : ";
cin>>num2;
cout<<"Enter operator(+,-,*,/) : ";
cin>>op;
if(op=='+'){
add(num1,num2);
}else if(op=='-'){
subtract(num1,num2);
}else if(op=='*'){
product(num1,num2);
}else if(op=='/'){
divide(num1,num2);
}else{
cout<<"Wrong entrnum2";
}
}

void add(int num1,int num2){
cout<<"result is "<<num1+num2;
}
void subtract(int num1,int num2){
cout<<"result is "<<num1-num2;
}
void product(int num1,int num2){
cout<<"result is "<<num1*num2;
}
void divide(int num1,int num2){
cout<<"result is "<<num1/num2;
}