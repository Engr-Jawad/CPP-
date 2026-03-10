// #include<iostream>
// using namespace std;
// int main(){
//     int n=9;
//     int i=0;
//     do {
//         cout<<i;
//         i++;
//     }while (i<=n);
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number\n";
    cin>>n;
    int i=0;
    do{
        cout<<i<<endl;
        if(i==5){
            break;
        }
        i++;
    }while(i<=n);
}