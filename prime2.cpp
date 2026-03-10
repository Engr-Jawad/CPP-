 #include<iostream>
    using namespace std;
    int main(){
        int n;
        cout<<"enter a number\n";
        cin>>n;
        bool isprime=true;
        for(int i=2;i<n-1;i++){
            if(n%i==0){
                isprime=false;
                break;
            }
        }
        if(isprime==true){
            cout<<"prime ni\n";

        }else if(isprime==false){
            cout<<"non prime";
        }
        return 0;
    }