#include<iostream>
using namespace std;
main(){

int n,w,h,painted;
cout<<"Number of square meters you can paint : ";
cin>>n;
cout<<"Width of single wall (in meter) : ";
cin>>w;
cout<<"Height of single wall (in meter) : ";
cin>>h;

painted = n/(w*h);

cout<<"No of walls you can paint : "<<painted;



}