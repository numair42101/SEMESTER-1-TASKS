#include<iostream>
using namespace std;

void calculatepayableamount(int bill,string day);

main(){
int bill;
string day;
cout<<"Enter your bill : ";
cin>>bill;
cout<<"Enter day : ";
cin>>day;
calculatepayableamount(bill,day);
}

void calculatepayableamount(int bill,string day){
if(y=="Monday"){
cout<<"Payable amount is "<<bill;
}else if(y=="Tuesday"){
cout<<"Payable amount is "<<bill;
}else if(y=="Wednesday"){
cout<<"Payable amount is "<<bill;
}else if(y=="Thursday"){
cout<<"Payable amount is "<<bill;
}else if(y=="Friday"){
cout<<"Payable amount is "<<bill;
}else if(y=="Saturday"){
cout<<"Payable amount is "<<bill;
}else{
cout<<"Payable amount is "<<bill-(bill/10);
}

}