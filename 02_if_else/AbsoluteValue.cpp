#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    if(n<0)  n= n*(-1);
    cout<<"The absolute value of number is "<<n;    
}
