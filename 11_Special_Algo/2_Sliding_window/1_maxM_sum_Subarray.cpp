#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int maxIdx = -1;  // storing the starting index that conveys after that 2 indexes(3) is the maxm sum of elements
    for(int i=0; i<=n-k; i++){   // operation  = n-k+1
        int sum = 0;
        for(int j=i; j<i+k; j++){  // operation = k times
            sum += arr[j];
        }
        if(maxSum<sum){
            maxSum = sum;
            maxIdx = i;
        }

    }
    cout<<maxSum<<endl;    // total operations = (n-k+1)*k = O(k*n)  which depends on the size of k 
    cout<<maxIdx;
}