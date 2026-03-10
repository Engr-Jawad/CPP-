#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=34;
    int * b=&a;
    cout<<b<<endl;
    b++;// dalta da incremnent matlab dy che yew integer size che sumra dy nu aghay amra incrementation waka pa da pointe che kam add
    //ress store karay dy pa aghay kay
    cout<<b<<endl;
    b--;
    cout<<"after decrementation"<<b<<endl;// 4 byte zay che kam day da tay lar ka da pointer na
// now   comming to addition in subtraction with pointer
b+=2;//2 int size memory warsara add ka
cout<<"value of b after addition = "<<b<<endl;//
    return 0;
}