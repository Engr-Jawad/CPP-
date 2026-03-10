#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks\n";
    cin>>marks;
    if(marks>=50 && marks<=60){
        cout<<"passed";
    }else if(marks >=60 && marks<=80){
        cout<<"grade C";
    }else if(marks>=80 && marks<90){
        cout<<"grade b";
    }else if (marks>90){
        cout<<"grade A";
    }else {
        cout<<"fail";
    }
    return 0;

}