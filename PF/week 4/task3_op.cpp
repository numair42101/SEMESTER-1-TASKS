#include<iostream>
using namespace std;

void howmanystickers(int n);

main(){
int n;
cout<<"Enter measurement in inches : ";
cin>>n;
howmanystickers(n);

}

void howmanystickers(int n){
int stickers;
stickers = (n*n)*6;
cout<<"The Rubik's cube of side length "<<n<<" has "<<stickers;
}