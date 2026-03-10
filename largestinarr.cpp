#include<iostream>
using namespace std;
int main(){
    int nums[5];
    int size=5;
    int largest;
    int smallest=-10000000;
    largest=smallest;
    cout<<"enter numbers\n";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest=nums[i];
            largest=i;// to print the index of a largest number in the arrays
        }
       
    }
      
    cout<<"largest number in the array is:"<<largest<<endl;
    return 0;
}