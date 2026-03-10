#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* b=&a;// aww da zamonga sara da a address save kee
    int** c=&b;//da ponter dy bal ponter address save ke
    cout<<*(&a)<<endl;//dalta monga derefreceing ku dy matlab da dy che da a pa address banday che kama value da agha show kii pa screen

    cout<<*b<<endl;
    cout<<*(&b)<<endl;
    cout<<*(c)<<endl;// single derefrencing
    cout<<**(c)<<endl;//double derefrencing operator da ba 10 show kee


    return 0;
}