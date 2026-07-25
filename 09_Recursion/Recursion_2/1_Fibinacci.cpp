#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1) return n;                     
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    cout<<"ENter the value of numeber: ";
    cin>>n;
    int x = fibonacci(n);
    cout<<x;
}
