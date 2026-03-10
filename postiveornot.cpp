#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number\n";
    cin>>num;
    if(num>0){
        cout<<"number is postive\n";

    } else if(num<0){
        cout<<"number is negative\n";
    }else {
        cout<<"number is equall to zero\n";
    }
    return 0;
}