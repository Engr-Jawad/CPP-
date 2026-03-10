#include<iostream>
using namespace std;
int sum(int x,int y){//parameters is nothing it is a copy of the arguments
    int s=x+y;
    return s;
}
int min(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
    return 2;
}

int main(){
    cout<<"mininum of two"<<min(23,45);// arguments it is the actual vlaue pass to a function
cout<<endl;
   cout<<"result="<<sum(10,20);
    return 0;
}