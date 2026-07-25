#include<iostream>
using namespace std;
int main(){
    // check the ith bit set or not
    // using the left shift or ri
    ght shift 
    int a = 13;         // 1101
    int i = 2;
    if(a & (1<<i)!=0) cout<<"true";        // left shift
    else cout<<"false";

    if((a>>i & 1) != 0 ) cout<<"true";    // Right shift
    else cout<<"false";


}