#include<iostream>
using namespace std;

void check(int num);

main(){
int num;
cout<<"Enter any number : ";
cin>>num;
check(num);
}

void check(int num){
if(num%2==0){
cout<<"Even";
}else{
cout<<"Odd";
}
}
