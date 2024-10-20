#include<iostream>
#include <iomanip>
using namespace std;
void calculateperc(float count){
    float number,p1,p2,p3,p4,p5;
    for(int i=1;i<=count;i++){
        cout<<"Enter a number:";
        cin>>number;
        if(number<200)
            p1++;
        else if(number>=200 && number<400)
            p2++;
        else if(number>=400 && number<600)
            p3++;
        else if(number>=600 && number<800)
            p4++;
        else if(number>=800)
            p5++;
    }
    cout<<setprecision(4)<<(p1/count)*100<<"%"<<endl;
    cout<<setprecision(4)<<(p2/count)*100<<"%"<<endl;
    cout<<setprecision(4)<<(p3/count)*100<<"%"<<endl;
    cout<<setprecision(4)<<(p4/count)*100<<"%"<<endl;
    cout<<setprecision(4)<<(p5/count)*100<<"%"<<endl;
}

int main() {
    float count;
    cout<<"Enter number count:";
    cin>>count;
    calculateperc(count);
    return 0;
}