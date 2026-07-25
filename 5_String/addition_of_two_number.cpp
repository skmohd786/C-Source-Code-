// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
    int a = 1234;
    int b = 9897;
    
    string s = "";
    int carry = 0;
    while(a>0 || b>0){
        int sum = carry;
        sum += (a%10 + b%10);
        s = to_string(sum % 10) + s;
        carry = sum/10;
        a = a/10;
        b = b/10;
    }
    if(carry) s = to_string(carry) + s;
    cout<<s;
}