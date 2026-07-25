#include<iostream>
using namespace std;     // use off check for n&1 == 0;
int main(){        // use brute force only here 
    int n = 13;
    int count = 0;
    while(n>=1){
        count += n&1;      // checks the remainder
        n = n >>1;
    }
    cout<<count;
}