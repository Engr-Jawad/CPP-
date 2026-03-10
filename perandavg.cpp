#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3,m4,m5;
    cout<<"enter ist subject marks\n";
    cin>>m1;
    cout<<"enter 2nd subject marks\n";
    cin>>m2;
    cout<<"enter 3rd subject marks\n";
    cin>>m3;
    cout<<"enter 4th subject marks\n";
    cin>>m4;
    cout<<"enter 5th subject marks\n";
    cin>>m5;
    int total=m1+m2+m3+m4+m5;
    float avg=total/5;
    float per=total/500*100;
    cout<<"result::\n";
    cout<<"total marks"<<total<<endl;
    cout<<"average"<<avg<<endl;
    cout<<"percentage"<<per<<endl;
    return 0;
}