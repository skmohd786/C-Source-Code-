#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n) return;  // base condn
    cout<<i<<endl;   // kaam
    print(i+1,n);  // call

}
int main(){
    int n;
    cout<<"Enter the value if number ";
    cin>>n;
    print(1,n);

}