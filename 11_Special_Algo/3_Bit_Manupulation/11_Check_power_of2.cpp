#include<iostream>
using namespace std;       
int main(){
    int n = 16;          // check for only one set bit
    if((n&(n-1)) == 0) cout<<"true";   // focus 
    else cout<<"false";
}