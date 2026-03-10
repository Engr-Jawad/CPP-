#include<iostream>
using namespace std;
int main(){
    int n=5;
    int marks[n];
    cout<<"enter marks of the students"<<endl;
    for(int i=0;i<n;i++){ 
        // loop to take data from the user
        cin>>marks[i];
    }
    cout<<"marks of the student is equall to :\n";
    for(int i=0;i<n;i++){
        // loop to show data to the user on the console
        cout<<"\t"<<marks[i];
    }
    //cout<<sizeof(marks)/sizeof(int);// show siize of the array 
    return 0;
}