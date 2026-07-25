#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=sqrt(n); i++){     // concept
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    if(isPrime(2)) cout<<"hai";
    else cout<<"nhi hai";
}