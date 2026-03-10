#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows\n";
    cin>>rows;
    int col;
    cout<<"enter number of columns\n";
    cin>>col;
    int matrix[rows][col];
    for(int i=0;i<rows;i++){// loop to cin array
        for(int j=0;j<col;j++){
            cout<<"enter valu for ("<<i<<","<<j<<")";// show the value of row index and column index
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<rows;i++){// loop to cout array
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}