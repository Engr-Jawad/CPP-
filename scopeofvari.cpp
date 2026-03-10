#include<iostream>
using namespace std;
int x=10;// global variable
void show(){
    cout<<x;
}
int  main()
{
    if(6>3){
        int m=90;// local variable
    }
    
   show();
        cout<<x<<endl;
        // cout<<m<<endl; da ba error ra kee

    }
