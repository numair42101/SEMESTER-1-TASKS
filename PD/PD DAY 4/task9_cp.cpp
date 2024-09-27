#include<iostream>
using namespace std;

void tpchecker(int peoples,int tprolls);

main(){
    int peoples,tprolls;
    cout<<"Enter the number of people: ";
    cin>>peoples;
    cout<<"Enter the number of rolls of tp: ";
    cin>>tprolls;
    tpchecker(peoples,tprolls);
    
}

void tpchecker(int peoples,int tprolls){
    int useperday,lastday;
    useperday=peoples*57;
    lastday=(tprolls*500)/useperday;
    if(lastday<14){
        cout<<"You will run out of tp in "<<lastday<<" days.Buy more!";
    }else{
        cout<<"You tp will last "<<lastday<<" days.No need to panic!";
    }
}
