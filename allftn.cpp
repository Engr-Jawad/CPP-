#include<iostream>
using namespace std;
int addition(int n1,int n2){
    int addd=n1+n2;
    return addd;
}
int subtraction(int n1,int n2){
    int sub=n1-n2;
    return sub;
}
int multipilcation(int n1,int n2){
    int mul=n1*n2;
    return mul;
}
float  divsion(float  n1,float  n2){
    float  div=n1-n2;
    return div;
}
int main(){
    int n1,n2;
    cout<<" WELCOME TO THE CALCULATION PROGRAM\n";
    cout<<"1 :  addition \n";
    cout<<"2 : subtraction\n";
    cout<<"3 : multiplication\n";
    cout<<"4 : division\n";
    int choice;
    cout<<"enter your choice from 1---4\n";
    cin>>choice;
     cout<<"enter ist number\n";
    cin>>n1;
    cout<<"enter 2nd number\n";
    cin>>n2;
    
     switch(choice){
    case 1:
        cout<<"result =" <<addition(n1,n2)<<endl;
        break;
    case 2:
        cout<<"result = "<<subtraction(n1,n2)<<endl;
        break;
    case 3:
        cout<<"result ="<<multipilcation(n1,n2)<<endl;
        break;
    case 4:
        cout<<"result ="<<divsion(n1,n2)<<endl;
        break;
    default:
    cout<<"invalid choice\n";
    break;
    
    
   
   
        
        

    }

    return 0;
    }
    



   
