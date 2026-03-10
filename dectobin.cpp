// #include<iostream>
// using namespace std;
// int dectobin(int num){
//     int answer=0;
//     int power=1;// mean 10 power zero
//     while(num>0){
//         int reaminder=num%2;
//         num=num/2;
//         answer+=reaminder*power;
//         power=power*10;
//     }
//     return answer;
// } 
// int main(){
//     int n;
//     cout<<"enter decimal number\n";
//     cin>>n;
//     cout<<"your decimal number in binary is equall to ="<<endl;
   
//     for(int i=0;i<n;i++){
//         cout<<"\t"<<dectobin(i);
//     }

//     return 0;
// }
#include<iostream>
using namespace std;
int dectobin(int n){
    int ans=0;
    int poweer=1;
    while(n>0){
        int rea=n%2;
        n/=2;
        ans+=rea*poweer;
        poweer*=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter decimal number\n";
    cin>>n;
    cout<<"your decimal in binary is equall to\n";
    cout<<endl;
//     for(int i=0;i<=n;i++){
       
// cout<<"\t"<<dectobin(i);
//     }
cout<<dectobin(n);
     
    return 0;
}