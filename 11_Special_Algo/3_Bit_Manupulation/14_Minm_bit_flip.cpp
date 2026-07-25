#include<iostream>
using namespace std;
int main(){
    int a=13;    //  1101  4 bits required to make the target
    int b = 16;   //10000   target
    int c = a^b;
    int count = 0;
    for(int i=0; i<31; i++){
        if(c & 1<<i) count++;
    }
    cout<<count;


} 