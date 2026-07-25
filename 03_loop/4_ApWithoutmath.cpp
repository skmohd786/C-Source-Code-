#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n  :"   ;
    cin>>n;
    int x = 1;
    for(int i = 1; i<=n; i++){
        cout<<x<<" "<<endl;
        x = x+2;
    }
}