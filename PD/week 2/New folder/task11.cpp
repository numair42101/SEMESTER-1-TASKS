#include<iostream>
using namespace std;
main(){

int age,move;

cout<<"Enter the person's age : ";
cin>>age;
cout<<"Enter the number of times they've moved : ";
cin>>move;
cout<<"Average number of years lived in the same house : "<<age/(move+1);


}