#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++){
        arr[i] += arr[i-1]; // making the prefix sum array
    }
    
    int idx = -1;
    // bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i]*2 == arr[n-1]){  // checking that can array make two subarrays with same sum of their elements
            idx = i;
        }
    }

    if(idx!=-1) cout<<"Yes it can be partitioned into two parts";
    else cout<<"cannot be partitioned into two parts";




}
    