#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"1:addition\n";
    cout<<"2:subtraction\n";
    cout<<"3:multiplication\n";
    cout<<"4:divison\n";
    int choice;
    cout<<"enter your choice from one to four\n";
    cin>>choice;
    cout<<"enter ist number\n";
    cin>>n1;
    cout<<"enter 2nd number";
    cin>>n2;
   
    
    switch (choice){
        case 1:
        cout<<"result" <<n1+n2;
        break;
        case 2:
        cout<< "result"<<n1-n2;
        break;
        case 3:
        cout<<"result"<<n1*n2;
        break;
        case 4: 
        cout<<"result"<<n1/n2;
        break;
        default:{
            cout<<"invlaid choice\n";
        }
    }
    return 0;
    

}