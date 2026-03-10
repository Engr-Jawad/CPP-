#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>num;
    cout<<"size ="<<num.size()<<endl;
    num.push_back(20);// push_back function to add some value 
    num.push_back(25);
    num.push_back(35);
    cout<<"after push back size  ="<<num.size()<<endl;
    num.pop_back();// delete the last value which is equall to 35 
    // delter the last index vlaue
    for(int i:num){
        cout<<i<<endl;
    }
    return 0;
}