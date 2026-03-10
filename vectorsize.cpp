#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>ch={'a','b','d','g','h','y'};
    for(char i:ch){
        cout<<i<<endl;
    }
   
    // size function for vector
cout<<"size"<<ch.size()<<endl;
    return 0;
}