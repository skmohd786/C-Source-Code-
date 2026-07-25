#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {1,1,1,0,0,0,1,1,1,1,0};
    int n = arr.size();
    int k =2;

    int maxLen = INT_MIN;
    for(int i=0; i<n; i++){
        int count = 0;
        int s = 0;
        for(int j=i; j<n; j++){
            if(arr[j]==1){
                count++;

            }
            else{      // arr[j] = 0 hai
                if(s<k){
                    // arr[j] = 1;  bcz it changes the actual elements that effects original arrad and i and j loops interations   
                    s++;
                    count++;
                }
                else{
                    break;  
                }
            }
            maxLen = max(count,maxLen);
        }
    }
    cout<<maxLen;
}