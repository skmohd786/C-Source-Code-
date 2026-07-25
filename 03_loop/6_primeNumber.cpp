#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value ";
    cin>>n;
    int a = 0;
    for(int i = 2;i<=n-1;i++ ){
        if(n%i==0){
            a = 1;
            break;
        }
    }

if(a == 1) cout<< n <<" "<<"is composite";
else cout<<n<<" "<<"is prime";
}





