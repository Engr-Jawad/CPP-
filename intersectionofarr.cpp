#include<iostream>
using namespace std;
void intersection(int arr1, int s11,int arr2, int s2){
    for(int i=0;i<s11;i++){
        for(int j=0;j<s2;j++){
            if(arr1[i]==arr2[j]){
            
            cout<<arr1[i]<<" ";
            break;
            }
        }
    }cout<<endl;

}
int main(){
    int arr1[]={1,2,3,4,5};
    int s1=5;
    int arr2[]={4,5,6,7,8};
    int s2=5;
    s1=sizeof(arr1)/sizeof(arr1[0]);
    s2=sizeof(arr2)/sizeof(arr2[0]);
    intersection(arr1,s1,arr2,s2);
    return 0;

}