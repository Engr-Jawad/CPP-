#include<iostream>
using namespace std;
void changea(int *b){// pass by refrence 
     *b=20;
}
int main(){
    int a=9;
    changea(&a);
    cout<<"the value of a in main function"<<a<<endl;
    return 0;

}