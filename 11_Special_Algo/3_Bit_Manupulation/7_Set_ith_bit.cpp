#include<iostream>
using namespace std;
int main(){
    int  n = 9;     // 1001 use left shift to i place and take or operator in btw
    int i = 2;
    n = n | (1<<i);    // pipe operator

    cout<<n;


}