#include<iostream>
using namespace std;
int main(){
    int nums[5];
    int size=5;
    cout<<"enter numbers\n";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    int largestindex=0;//dy ta da largest number index wacha wa
    int largest;
    int smallest=-1000000000;
    largest=smallest;
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest=nums[i];
           largestindex=i; // aww dalta ba dy da largest number index wacha walay shee
        }
    }
    cout<<"index of the largest number in the array is  "<<largestindex
    <<endl;
    return 0;
}
