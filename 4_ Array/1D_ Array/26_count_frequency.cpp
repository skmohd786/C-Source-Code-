#include<iostream>
#include<vector>
#include<set> 
using namespace std;
int main(){
    int arr[] = {1,2,3,1,2,5,3,1,2,6,7,8,6,5,3,43,43,2,8,4,5,7,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    set<int>v;

    for(int i=0; i<n; i++){
        v.insert(arr[i]);
    }

    for(auto x : v){
        int count = 0;
        for(int i =0; i<n; i++){
            if(x == arr[i]) count++;
        }
        cout<<x<<" is "<<count<<" times"<<endl;
    }
}