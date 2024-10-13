#include<iostream>
using namespace std;

int calculatevolleyballgames(string yeartype,int holidays,int hometownweekends){
    float freesaturday=((48-hometownweekends)*(3.0/4.0));
    float result = freesaturday+((2.0/3.0)*holidays)+hometownweekends;
    if(yeartype=="leap")
        result = result + (result*.15);
    return (result);
}

int main(){
    string yeartype;
    int holidays,hometownweekends;
    cout<<"Enter the type of year (normal or leap): ";
    cin>>yeartype;
    cout<<"Enter number of holidays  ";
    cin>>holidays;
    cout<<"Enter number of hometown weekends ";
    cin>>hometownweekends;
    cout<<calculatevolleyballgames(yeartype,holidays,hometownweekends);
}