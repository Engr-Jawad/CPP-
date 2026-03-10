#include<iostream>
using namespace std;
int main(){
    int a=10;// this is a variaable
    // with the help of & sign we store the variable address in the other variable
    int* b=&a;// pointer are special variable which store the address of other variable
   cout<<"address of a in memory = "<<&a<<endl;// da a address show kee
   cout<<"b have address of a  ="<<b<<endl;// dalta da b da a address ta point kee

   cout<<"address of b ="<<&b<<endl;// aww da original address day da b

    return 0;
}