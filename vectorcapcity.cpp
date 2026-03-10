#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(4);
    vec.push_back(0);
     vec.push_back(1);
      vec.push_back(2);
       vec.push_back(3);
       cout<<"vector size is equall to :"<<vec.size()<<endl;
       cout<<"vector capacity is equall to :"<<vec.capacity()<<endl;
       return 0;
    
}