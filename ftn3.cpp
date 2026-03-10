#include<iostream>
using namespace std;
int fact(int n){
    int factt=1;
    for(int i=1;i<=n;i++){
        factt*=i;
    }
    return factt;
}






int main(){
    cout<<"factorial of a number is ="<<fact(5);
    return 0;
}