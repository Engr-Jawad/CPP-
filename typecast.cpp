#include<iostream>
using namespace std;
int main
(){
    // implicit type casting or conversion to change samll data type to big data type it is easy
    char grade='b';
    int value=grade;
    // type casting to change big data type into small data type
    // it is also called a original type casting
    double price=456.89;
    float newprice=(float )price;
    cout<<"new price "<<newprice<<endl;
    cout<<value;
    return 0;
}