#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n == 1|| n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
    
}
int main(){
    int n , sum = 0;
    cout<<"ENter the value of numeber: ";
    cin>>n;
    for(int i=1;i<=n;i++){    //usign loop here to get the sum at the same time
        sum += fibonacci(i);
    }
    cout<<sum;
    
}
