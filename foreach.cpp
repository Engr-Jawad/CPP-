#include<iostream>
#include<vector>// vector laibrary
using namespace std;
int main(){
    
    vector<int>arr(5,7);// size = 5 and every index element is = 7
    for(int val:arr){// for each loop on vector
        cout<<val<<endl;
    }
    return 0;
}