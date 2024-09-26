#include<iostream>
using namespace std;

void inchtofoot(int inche);

main(){
int inche;
cout<<"Enter measurement in inches : ";
cin>>inche;
inchtofoot(inche);

}

void inchtofoot(int inche){
int foot;
foot = inche/12;
cout<<"The measurement in foot is "<<foot;
}