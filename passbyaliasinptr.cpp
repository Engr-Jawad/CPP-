#include<iostream>
using namespace std;
void changea(int &b){// passs by alisa mean same name
    b=20;
}
int main(){
    int a=23;
    changea(a);
    cout<<a<<endl;
    return 0;
}