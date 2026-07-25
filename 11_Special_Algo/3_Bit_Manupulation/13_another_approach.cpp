#include<iostream>
using namespace std; 
int main(){
    int n  = 12;
    int count = 0;
    while(n != 0){
        n = (n & (n-1));           // turn off the reight most 1 bit every time until it made itself zero
        count++;                        // tc --> o(no if set bit)
    }
    cout<<count;
    
}