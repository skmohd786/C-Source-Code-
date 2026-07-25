#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n = 13;        // using lcm and storing into some variable and reverse it 
    string c = "";
    while(n>0){
        if(n%2==1) c += '1';         // tc = logn and sc= logn
        else c += '0';
        n = n/2;
    }
    reverse(c.begin(),c.end());
    cout<<c;
    

}