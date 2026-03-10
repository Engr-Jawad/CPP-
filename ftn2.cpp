#include<iostream>
using namespace std;
int sumtoN(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
       
    }
    cout<<sum<<endl;
    return sum;
}
int main(){
    cout<<"sum to n"<<sumtoN(5);
    return 0;
}