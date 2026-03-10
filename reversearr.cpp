// #include<iostream>
// using namespace std;
// void revarr(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<=end){// dalata da equall zaka dy che da array size odd dy
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};//array size odd dy
//     int siz=5;
//     revarr(arr,siz);// revesrse array function calling
//     for(int i=0;i<siz;i++){
//         cout<<arr[i];
//     }
//     return 0;

// }
#include<iostream>
using namespace std;
void revarr(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[4]={1,2,3,4};
    int size=4;
    revarr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}