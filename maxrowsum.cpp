#include<iostream>
#include<climits>
using namespace std;
int getsum(int matt[][3],int r,int c){
   int maxsum=INT_MIN;
   for(int i=0;i<r;i++){
    int rowsum=0;
    for(int j=0;j<c;j++){
        int colsum=0;
        rowsum+=matt[i][j];
    }
    maxsum = max(maxsum,rowsum);
   }
   return maxsum;
}
int main(){
    int matt[3][3]={{1,2,3},{4,5,60},{7,8,9}};
    int r=3;
    int c=3;
    cout<<"max row sum = "<<getsum(matt,r,c)<<endl;
    return 0;
}