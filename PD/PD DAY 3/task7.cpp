#include<iostream>
using namespace std;
main(){

string name;
int aticketprice,cticketprice,atsold,ctsold;
float donated,totalcash,remaining,donation;

cout<<"Enter the movie name : ";
cin>>name;
cout<<"Enter the adult ticket price : $";
cin>>aticketprice;
cout<<"Enter the child ticket price : $";
cin>>cticketprice;
cout<<"Enter the number of adult tickets sold : ";
cin>>atsold;
cout<<"Enter the number of child tickets sold : ";
cin>>ctsold;
cout<<"Enter the percentage of ammount to be donated to the charity : ";
cin>>donation;
cout<<endl<<endl;

totalcash = (aticketprice*atsold)+(cticketprice*ctsold);
donated = (donation/100)*totalcash;
remaining = totalcash-donated;

cout<<"Movie : "<<name<<endl;
cout<<"Total amount generated from ticket sales : $"<<totalcash<<endl;
cout<<"Donation to charity ("<<donation<<"%) : $"<<donated<<endl;
cout<<"Remaining ammount after donating : $"<<remaining<<endl;
}