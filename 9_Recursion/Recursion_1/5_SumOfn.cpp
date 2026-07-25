#include<iostream>
using namespace std; // parametric type
void Sum(int sum,int n){
    if(n==0){
        cout<<sum;
        return;
    }
    Sum(sum+n,n-1);
}
int main(){
    int n;
    cout<<"Enter the value if number ";
    cin>>n;
    Sum(0,n);
}