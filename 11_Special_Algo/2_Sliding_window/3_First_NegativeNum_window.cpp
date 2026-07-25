#include<iostream>
#include<limits.h>
#include<vector>      // brute force approach
using namespace std;
int main(){
    vector<int>v = {2,-3,4,4,-7,-1,4,-2,6};
    int n = v.size();
    vector<int>res;
    int k = 3;
    int Maxmin  =INT_MIN;
    // int maxIdx = -1;

    
    for(int i=0; i<n-k+1; i++){
        for(int j=i;j<k+i; j++){
            if(v[j]<0){
                res.push_back(v[j]);     // O(n*k) is time complexity
                break;
            }
        }
    
    }
    for(int i =0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }

     
}