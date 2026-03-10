#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number\n";
    cin>>n;
    int sum;
    for(int i=0;i<=n;i++){
       if(i%3==0){
        sum+=i;
       }
       
    }
    cout<<sum;
    return 0;
}