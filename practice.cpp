// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number\n";
//     cin>>n;
//     for(int i=1;i<=n/2;i++){
//         if(n%i==0){
//         cout<<n/i<<"*"<<i<<endl;

//         }
//     }
//     return 0;
// }



#include<iostream>
#include<string>
using namespace std;
int main(){
    string address;
    cin>>address;
    char ch;
    while(true){
        cin.get(ch);
            if(ch=='.'){
                break;
                address+=ch;
            
        }
    }
    cout<<address<<endl;
    return 0;
}