#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms ";
    cin>>n;
    int sum, a , b;
    a = 0;
    b = 1;
    sum = 0;
    for(int i = 1;i<=n-1; i++){
        // cout<<a<<" ";        
        sum = a+b;
        a = b;
        b = sum;
    }
    cout<<"the "<<n<<"th fibonacci is "<<a;

}