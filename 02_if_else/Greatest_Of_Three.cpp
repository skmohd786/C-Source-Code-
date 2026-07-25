#include<iostream>
using namespace std;
int main(){
    int a , b ,c;
    cout<<"Enter the First number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    cout<<"Enter the third number :";
    cin>>c;
    if(a>b && a>c) cout<<a<<"is greatest";
    if(b>a && b>c) cout<<b<<"is greatest";
    if(c>b && c>a) cout<<c<<"is greatest";

}

