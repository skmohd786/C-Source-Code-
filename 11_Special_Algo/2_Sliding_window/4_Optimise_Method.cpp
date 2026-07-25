#include<iostream>
#include<limits.h>
#include<vector>      // sliding window
using namespace std;
int main(){
    vector<int>v = {2,-3,4,4,-7,-1,4,-2,6};
    int n = v.size();
    int k = 4;         // size of the window 
    vector<int>res(n-k+1); // be focused
    int p = -1;

    for(int i=0; i<k; i++){     // travelling in the first window
        if(v[i]<0){
            p = i;
            break;
        }
    }
    if(p==-1) res[0] = 1;
    else res[0] = v[p];

    int i = 1;
    int j = k;
    while(j<n){
        if(p>=i) res[i] = v[p];
        else{
            p = -1;
            for(int x = i; x<=j;x++){
                if(v[x]<0){
                    p = x;
                    break;
                }
            }
            if(p != -1) res[i] = v[p];    // check condn whether the negative elements presents or not
            else res[i] = 1;
        }
        i++;
        j++;
    }
    for(int i=0; i<n-k+1; i++){
        cout<<res[i]<<" ";
    }
}