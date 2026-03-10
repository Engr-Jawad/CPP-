// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     return fact;
// }
// int ncr(int n,int r){
//     int factorialofn=factorial(n);
//     int  factorialofr=factorial(r);
//     int nmr=factorial(n-r);
//     return factorialofn/(factorialofr*nmr);
// }
// int main(){
//     int n=8,r=2;
//     cout<<ncr(n,r);
//     return 0;
// }
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }return fact;
}
int ncr(int n,int r){
    int fn=factorial(n);
    int fr=factorial(r);
int nmr=factorial(n-r);
return fn/(fr*nmr);
}
int main(){
    int n=8,r=2;
    cout<<ncr(n,r);
    return 0;
}