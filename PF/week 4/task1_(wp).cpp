#include<iostream>
using namespace std;

void calculator(int num1, int num2, char op);

main(){
int num1,num2;
char op;
while(true){
cout<<endl<<"Enter first number : ";
cin>>num1;
cout<<"Enter second number : ";
cin>>num2;
cout<<"Enter operator(+,-,*,/) : ";
cin>>op;
calculator(num1, num2, op);
}
}

void calculator(int num1, int num2, char op){
if(op=='+'){
cout<<"result is "<<num1+num2;
}else if(op=='-'){
cout<<"result is "<<num1-num2;
}else if(op=='*'){
cout<<"result is "<<num1*num2;
}else if(op=='/'){
cout<<"result is "<<num1/num2;
}else{
cout<<"Wrong entry";
}
}