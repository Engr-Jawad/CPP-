 #include<iostream>
 using namespace std;
 int dignolsum(int matrix[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(i==j){// aww da zamong sara primaray dignol sum calculate kee
                sum+=matrix[i][j];
                // da landay da zamong sara secondaery diagnol sum calculate kee
            }else if(j==n-i-1){
                sum+=matrix[i][j];
            }
        }
    }
    return sum;
 }

  int main(){
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // rows=4 and col=4 and n is equall both rows and colmns
    int n=4;
    cout<<"both diagnol sum primrary and secondary is equall to :"<<dignolsum(matrix,n);
    return 0;
 }






 
#include<iostream>
using namespace std;
int diagnolsum(int matt[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=matt[i][j];
            }
            else if(j==n-i-1){
                sum+=matt[i][j];
            }
        }
    }
    return sum;
}
int main(){
    int matt[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    cout<<diagnolsum( matt,n);
    return 0;
}