#include<iostream>
#include<vector>    // given the target sum,the subarray >= target
#include<limits.h>
using namespace std;        // brute force methods with O(n*n)  complexity
int main(){
    vector<int>v  = {2,3,1,2,4,3};
    int n = v.size();
    int target = 7;
    int minLen = INT_MAX;  // lenth of the subarrays
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += v[j];
            if(sum>=target){
                int len = j-i+1;
                if(minLen>len) minLen = len;
                break;
            }

        }
    }
        
    cout<<minLen;
}