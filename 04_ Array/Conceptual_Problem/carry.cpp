#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>arr = {9,6,7,8,9};
    vector<int>brr = {20,7,9,5,3,2,20};
    int n = arr.size();
    int m = brr.size();
    
    vector<int>v(m+1);
    
    int i = n-1 ;
    int j =m-1;
    int k =m;
    int carr = 0;
    while(i>=0 || j>=0){ 
        int sum = carr;
        if(j>=0) sum += brr[j];
        if(i>=0) sum += arr[i];
        v[k] = sum%10;
        carr = sum/10;
        i--;
        j--;
        k--;
    }
    v[0] = carr;
    int st = (v[0] == 0) ? 1 : 0;
    for(int l=st;l<v.size(); l++){
        cout<<v[l]<<" ";
    }
}

