#include<iostream>
using namespace std;
void sawapmaxandmin(int arr[],int size){
    int largest=-1000000;
    int smallest=9000000;
    int largestindex=0;
    int smallestindex=0;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
            largestindex=i;
        }if(arr[i]<smallest){
            smallest=arr[i];
            smallestindex=i;
        }
    }
    int temp=arr[smallestindex];
    arr[largestindex]=arr[smallestindex];
    arr[smallestindex]=temp;
    cout<<"array after swaping ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
int main(){
    int arr[]={1,2,3,4,5,9};
    int size=6;
    sawapmaxandmin(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
  
    return 0;
}