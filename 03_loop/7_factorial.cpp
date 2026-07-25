#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int x=1;
    for(int i=2;i<=n;i++){
        x = x*i;
        cout<<"the factorial of "<<i<<" is "<<x<<endl;
    } 
    //cout<<x;
}