#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>n;
    n.push_back(7);
    n.push_back(2);
    n.push_back(3);
    n.push_back(4);
    
    // cout<<n.size()<<endl;
    cout<<"ist value = "<<n.front()<<endl; // print the ist vlaue on the screen
   for(int i:n){
    cout<<i<<endl;
   }
   n.pop_back();// delete 4
cout<<"last value"<<n.back()<<endl;// last value is = 3
cout<<"index vlaue ="<<n.at(0)<<endl;
   cout<<n.at(3);
   
    return 0;

}