#include<iostream>
using namespace std;
int stair(int n){   // max jump = 2
    if(n==2) return 2;
    if(n==1) return 1;
    return stair(n-1) + stair(n-2);
    
}
int main(){
    int n;
    cout<<"ENter the number of stairs: ";
    cin>>n;
    int x = stair(n);
    cout<<x;
}
