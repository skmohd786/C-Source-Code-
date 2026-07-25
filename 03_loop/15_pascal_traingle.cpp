// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r = 5;
    int c = 5;
    
    for(int i =1; i<=r; i++){
        for(int j=1;j<=r-i;j++){
            cout<<" ";
        }
        int rev = 1;
        for(int j=1;j<=i;j++){
            // cout<<"*"<<" ";
            if(i==j || j==1) cout<<"1"<<" ";
            else{
                rev= rev*(i-j+1)/(j-1);
                cout<<rev<<" ";
            
            }
        }
        cout<<endl; 
    }
}