// #include<iostream>
// using namespace std;
// int bintodec(int n){
//     int ans=0;
//     int pow=1;//mean 2 power zero
//     while(n>0){
//         int rea=n%10;
//         ans+=rea*pow;
//         n/=10;
//         pow*=2;
//     }
//     return ans;// give answer in decimal form
// }
// int main(){
//     int n;
//     cout<<"enter binary number";
//     cin>>n;
//     cout<<"you binary is equall to ="<<endl;
//     cout<<bintodec(n);
//     return 0;
// }
#include<iostream>
using namespace std;
int binTOdec(int n){
    int ans=0;
    int power=1;
    while(n>0){
        int rea=n%10;
        ans+=rea*power;
        n/=10;
        power*=2;
    }
    return ans;// means retun the answer in the binary
}
int main(){
    int n;
    cout<<"enter binary number";
    cin>>n;
    cout<<"equall in decimal"<<binTOdec(n);
    return 0;
}