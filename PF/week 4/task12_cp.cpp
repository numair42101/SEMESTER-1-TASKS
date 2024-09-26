#include<iostream>
using namespace std;

void calculatepayableamount(int x,string y);

main(){
int bill;
string day;
while(true){
cout<<endl<<"Enter your bill : ";
cin>>bill;
cout<<"Enter day : ";
cin>>day;
calculatepayableamount(bill,day);
}
}

void calculatepayableamount(int x,string y){
if(y=="Monday"){
cout<<"Payable amount is "<<x-(x/20);
}else if(y=="Tuesday"){
cout<<"Payable amount is "<<x-(x/20);
}else if(y=="Wednesday"){
cout<<"Payable amount is "<<x-(x/20);
}else if(y=="Thursday"){
cout<<"Payable amount is "<<x-(x/20);
}else if(y=="Friday"){
cout<<"Payable amount is "<<x-(x/20);
}else if(y=="Saturday"){
cout<<"Payable amount is "<<x-(x/20);
}else{
cout<<"Payable amount is "<<x-(x/10);
}

}