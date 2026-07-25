#include<iostream>
#include<vector>
using namespace std;
int power(int a,int n){
    int pow = 1;
    for(int i=0; i<n; i++){
        pow *= a;
    }
    return pow;
        
}
int main(){
    vector<int>arr = {0,0,1,1,1,0,1,1,0};
    int n = arr.size();
    int sum = 0;
    for(int i=n-1; i>=0; i--){

        if(arr[i]==1){
            int j = n-i-1;
            sum += arr[i]*power(2,j);
        }
        
    }
    cout<<sum;
}