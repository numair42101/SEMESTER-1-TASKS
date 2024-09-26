#include<iostream>
using namespace std;
main(){

float vegprice,fruitprice,earning;
int vegweight,fruitweight;
cout<<"Enter vegetable price per kilogram (in coins) : ";
cin>>vegprice;
cout<<"Enter fruit price per kilogram (in coins) : ";
cin>>fruitprice;
cout<<"Enter total kilogram of vegetable : ";
cin>>vegweight;
cout<<"Enter total kilogram of fruit : ";
cin>>fruitweight;

earning = ((vegprice*vegweight)+(fruitprice*fruitweight))/1.94;

cout<<"Total earning in Rupee (Rs) : "<<earning;


}