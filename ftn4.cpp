// #include<iostream>
// using namespace std;
// int sumofdigits(int n){
//     int digitsum=0;
//     while(n>0){
//         int lastdig=n%10;
//         n=n/10;
//         digitsum+=lastdig;
//     }
    
//     return digitsum;
// }
// int main(){
//     cout<<sumofdigits(145);
//     cout<<endl;
//     cout<<sumofdigits(4567);
//     return 0;
// }
#include<iostream>
using namespace std;
int sumofdigits(int num){
    int digitsum=0;
    while(num>0){
        int lastdigit=num%10;
        num=num/10;
        digitsum+=lastdigit;
    }
    return digitsum;
}
int main(){
    cout<<sumofdigits(67);
    return 0;
}
