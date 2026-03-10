#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl; // range -2 power -31 to 2 power 31
    cout<<sizeof(long int)<<endl;// -2 power 63 to 2 power 63
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(long long int)<<endl;
cout<<sizeof(unsigned int)<<endl;// always have postive value donot print negative value on the screen
unsigned int n=-10;
cout<<n;
}