// #include<iostream>
// using namespace std;
// int linersearch(int arr[],int sz,int target){
//     for(int i=0;i<sz;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[7];
//     int size=7;
//     int target;
//     cout<<"enter arrray\n";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter target\n";
//     cin>>target;
//     cout<<"the index number of your target is :"<<linersearch(arr, size,target);
//     return 0;
// } 
#include<iostream>
using namespace std;
int linersearch(int arr[],int siz,int target){
    for(int i=0;i<siz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int size=7;
    int  target=4;
    cout<<"your target index is"<<linersearch(arr,size,target);

    return 0;
}