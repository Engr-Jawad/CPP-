#include<iostream>
using namespace std;
int allprime(int n){
    bool isprime=true;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            isprime=false;
            
        }

    }
    
    return 1;

}
int main(){
    cout<<allprime(9);
    return 0;
}