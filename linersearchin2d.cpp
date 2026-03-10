#include<iostream>
using namespace std;
bool linersearch(int matt[][3],int r,int c,int tar){
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matt[i][j]==tar){
                return true;
                
                
                
            }
        }
    }
    return false;
}
int main(){
    cout<<"if in the output show you 1 its mean number exsist in the matrix\n";
    cout<<"if its shows 0 in the output  its mean number do not exsist in the matrix\n";
    int matt[3][3]={{1,2,3},{4,5,6},{7,8,9},};
    int r=3;
    int c=3;
    int tar=0;
    cout<<"output ="<<linersearch(matt,r,c,8);
    cout<<endl;
    return 0;
}
