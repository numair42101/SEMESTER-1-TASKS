#include<iostream>
using namespace std;

void printname(string name);

main(){
string name;
cout<<"Enter your name : ";
cin>>name;
while(true){
printname(name);
}
}

void printname(string name){
cout<<endl<<name;
}