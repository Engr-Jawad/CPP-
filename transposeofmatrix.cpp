#include<iostream>
using namespace std;
int main(){
    int matt[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"enter valu for ("<<i<<","<<j<<")";// show the value of row index and column index
           
            cin>>matt[i][j];
        }
    }
    cout<<"\tMATRIX"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"\t"<<matt[i][j];
    } cout<<endl;
        }cout<<endl;
        cout<<"*****************************************\n";
        cout<<"transpose of the matriz is\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matt[i][j]==matt[j][i];
                cout<<" "<<matt[j][i];
            }
            cout<<endl;
        }cout<<endl;
        
                
                return 0;
    } 
