#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;    // find the largest subarray of 1's after deleting one.  lc--> 1493
int main(){
    vector<int>v = {0,1,1,1,0,1,1,0,1};
    int n = v.size();
    int maxlen = INT_MIN;
    // int len = INT_MAX;
    
    for(int i = 0; i<n-1; i++){
        int len = 0;
        int noz = 0;
        for(int j = i; j<n; j++){
            
            if(v[j] == 1){
                len++;
            }
            
            else{                   //v[j] == 0
                if(noz<1){
                    noz++;
                }
                else{
                    maxlen = max(len,maxlen);
                    break;
                }
            }
            
            
            
            
        }
    
    }
    cout<<maxlen;
}

