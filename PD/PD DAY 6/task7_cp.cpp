#include<iostream>
using namespace std;

string checkstudentstatus(int examhour,int examminute,int studenthour,int studentminute){
    int differencehour=examhour-studenthour;
    int differenceminute=examminute-studentminute;
    if((differencehour<0)||(differenceminute<0)){
        return "Late";
    }else if(((differencehour==0)||(differencehour==1))&&(differenceminute<=30)){
        return "On Time";
    }
}

int main(){
    int examhour,examminute,studenthour,studentminute;
    cout<<"Enter the exam starting time (hour) : ";
    cin>>examhour;
    cout<<"Enter the exam starting time (minute) : ";
    cin>>examminute;
    cout<<"Student hous of arrival : ";
    cin>>studenthour;
    cout<<"Student minute of arrival : ";
    cin>>studentminute;
    cout<<checkstudentstatus(examhour,examminute,studenthour,studentminute);
}