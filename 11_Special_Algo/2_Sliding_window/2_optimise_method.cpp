#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;     // on changing the k it gives the different value of index and sum
    int maxSum = INT_MIN;
    int maxIdx = -1;  
    int prevSum = 0;
    
    for(int i=0; i<k;i++){     //O(k)
        prevSum += arr[i];   // stores the first k elements sum
    }

    maxSum = prevSum;
    int i=1;
    int j=k;
    while(j<n){    // O(n-k)
        prevSum = prevSum + arr[j] - arr[i-1];
        if(prevSum>maxSum){
            maxSum = prevSum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    cout<<maxSum<<endl;  // time Complexity ~= O(n) = O(n-k + k)
    cout<<maxIdx;


    
}