#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {0,0,1,1,1,0,1,1,0};
    int n = arr.size();

    int dec_sum = 0;
    for(int i=n-1; i>=0; i--){       // from backwards
        if(arr[i]==1){
            dec_sum += 1<<(n-i-1);
        }
    }
    cout<<dec_sum;
}