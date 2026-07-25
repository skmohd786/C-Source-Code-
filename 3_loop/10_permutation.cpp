#include<iostream>
using namespace std;
int factorial(int n){
    int x=1;
    for(int i = 2; i<=n; i++){
        x = x*i;
    }
    return x;
}
int main(){
    int n , r, permutation;
    cout<<"Enter the value of n ";
    cin>>n;
    cout<<"Enter the value of r ";
    cin>>r;
    permutation = factorial(n)/factorial(n-r);
    cout<<permutation;
    

    
}