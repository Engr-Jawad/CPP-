#include<iostream>
using namespace std;
int main(){
    int num[5];
    int size=5;
    cout<<"enter number\n";
    for(int i=0;i<size;i++){
        cin>>num[i];  
}
int smallest;
int smallestindex=0;
int largest=90000000;
smallest=largest;
for(int i=0;i<size;i++){
    if(num[i]<smallest){
        smallest=num[i];
        smallestindex=i;

    }

}
cout<<"the smallest number is :"<<smallest<<endl;
cout<<"the index of the smallest number in the array :"<<smallestindex<<endl;
return 0;
}