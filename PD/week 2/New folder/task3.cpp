#include<iostream>
using namespace std;
main(){

int initial_velocity,acceleration,time;
cout<<"Enter initial velocity (m/s) : ";
cin>>initial_velocity;
cout<<"Enter acceleration (m/s^2) : ";
cin>>acceleration;
cout<<"Enter time (s) : ";
cin>>time;
cout<<"Final velocity (m/s) : "<<(acceleration*time)+initial_velocity;


}