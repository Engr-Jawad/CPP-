#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks of the student"<<endl;
    cin>>marks;
    if(marks>50 && marks<70){
        cout<<"you are passed\n";
    }else if(marks>70&& marks<80){
        cout<<"good";
    }else if(marks>80 && marks<100){
        cout<<"excellent";
    }else {
        cout<<"not esist\n";
    }
    return 0;
}