#include<iostream>
using namespace std;
void unique(int arr1[],int arr2[],int n){
    for(int i=0;i<n;i++){
        bool isunique= true;
        for(int j=0;j<i;j++){
            if(arr1[i]==arr2[j]){
                bool isunique=false;
                break;
            }

        }
        if(isunique){
            cout<<arr1[i];
        }
    }
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={4,5,6,7,8};
    int n;
    cout<<unique(arr1,arr2,n);
    return 0;

}