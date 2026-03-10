#include<iostream>
using namespace std;
int main(){
    int num[5];
    
    //  num[5]={20,34,56,78,-90};
    int size=5;
    int smallest;
    int max=20000000;
    smallest=max;
    cout<<"enter number\n";
    for(int i=0;i<size;i++){
        // loop to take input form the users
        cin>>num[i];
    }
    for(int i=0;i<size;i++){
        if(num[i]<smallest){
            // loop to show the smallest number on the screen
            smallest=num[i];
        }
    }
    cout<<"smallest "<<smallest<<endl;
    return 0;

}