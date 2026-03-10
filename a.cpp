#include<iostream>
#include<climits>
using namespace std;
bool linesearch(int arr[][3],int n,int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }return false;
}
int maxrow(int arr[][3],int n){
    int maxrowsum=INT_MIN;
    for(int i=0;i<3;i++){
        int rowsumi=0;
        for(int j=0;j<3;j++){
            rowsumi+=arr[i][j];
        }
        maxrowsum=max(maxrowsum,rowsumi);
    }
    return maxrowsum;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    cout<<"MATRIX\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<< " "<<arr[i][j];
        }
        cout<<endl;
    }
    //  target=23;int
    // cout<<linesearch(arr,n,target)<<endl;
    cout<<"maximum row sun is equall to\n";
    cout<<maxrow(arr,n)<<endl;
    return 0;
}