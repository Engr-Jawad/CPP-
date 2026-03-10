#include<iostream>
using namespace std;
// pass by refrence 
// change reflect in original 
//refrence mean address
void changearr(int arr[],int size){
    cout<<"in the change function\n";
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }
}
int main(){
    cout<<"in the main function\n";
    int arr[3]={3,4,5};
     changearr(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i];
    }
   
    return 0;
}