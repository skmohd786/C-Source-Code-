#include<iostream>
using namespace std;

int power(int x,int n){
    if(n==1) return x;
    if(n%2==0){
        return power(x,n/2) * power(x,n/2);
    }
    else{
        return power(x,n/2) * power(x,n/2) * x;
    }
}

int main(){
    int x ,n;
    cout<<"Enter the vlaue of base: ";
    cin>>x;
    cout<<"Enter the vlaue of exponent: ";
    cin>>n;
    int z = power(x,n);
    cout<<z;


}