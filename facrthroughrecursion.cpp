#include<iostream>
using namespace std;
int fact(int n){
    if (n==1){
        return 1;
    }
    cout<<n<<" ";
    return n*fact(n-1);
}
int main(){

int n;
cout<<"enter a number";
cin>>n;


cout<<"  "<< fact(n)<<" "; // for example 4 dy nu 4*3 aww 12*2 aww 24*1

    return 0;
}