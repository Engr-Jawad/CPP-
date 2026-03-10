#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int x=10;//pass the value of x to "a "variable in the above function
    int y=20;//pass the value of y to "b" variable in the above function
    cout<<"sum of the value you enterd"<<sum(x,y);
    return 0;
}