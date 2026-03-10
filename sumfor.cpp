// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //   int n;
// // //   cout<<"enter a number\n";
// // //   cin>>n;
// // //   int sumton=0;
// // // for(int i=0;i<=n;i++){
// // //     sumton+=i;
   
// // // }
// // //  cout<<sumton;

// // //     return 0;
// // // }
// // // #include<iostream>
// // // using namespace std;
// // // int  main(){
// // //     int n,i;
// // //     cout<<"enter a number\n";
// // //     cin>>n;
// // //     int sum=0;
// // //     while(i<=n){
// // //         sum+=i;
// // //         if(i==5){
// // //             break;// break keyword it is a special reserved words
// // //         }
       
// // //         i++;
// // //     }
// // //  cout<<sum<<endl;

// // //     return 0;
// // // }
// // #include<iostream>
// // using namespace std;
// // int main(){
// // int n;
// // cout<<"enter a number\n";
// // cin>>n;
// // int oddsum;
// // for(int i=0;i<=n;i++){
// //     if(i%2!=0){
// //     oddsum+=i;
// // }

// // }
// // cout<<oddsum<<endl;



// //     return 0;
// // }
// #include<iostream>// home work
// using namespace std;
// int main(){
//     int n,i;
//      cout<<"enter a number\n";
//      cin>>n;
//      int oddsum;
//      while(i<=n){
//         if(i%2!=0){
//             oddsum+=i;
//         }
//         i++;
//      }
//      cout<<"odd sum"<<oddsum<<endl;
//      return 0;
// }
#include<iostream>//  homework
using namespace std;
int main(){
    int n;
    cout<<"enter a number\n";
    cin>>n;
    int evensum=0;
    for(int i=0;i<=n;i++){
      if(i%2==0){
        evensum+=i;
      }
       
    }
    cout<<"even sum"<<evensum<<endl;
    
    return 0;
}