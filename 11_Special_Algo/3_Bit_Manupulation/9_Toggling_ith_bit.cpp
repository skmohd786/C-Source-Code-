#include<iostream>
using namespace std;
int main(){       // using xor operator
    int n  = 13;    // 1101
    int i = 1;
    
    n = (1<<i) ^ n;          // focused 
    cout<<n;

}