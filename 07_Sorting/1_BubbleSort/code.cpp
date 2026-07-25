#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {2,4,5,6,-1,7};
    int n = 6;
    for(int i= 0; i<n; i++){ 
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sorting 
    for(int i = 0; i<n-1 ; i++){ //passes
        bool flag = true;
        for(int j = 0 ;j<n-1-i; j++){
            if(arr[j]>arr[j+1]){  // change the sign to get the decreasing order 
                swap(arr[j],arr[j+1]); // best case o(n) possible 
                flag = false;
            }
        }
        if(flag == true) break;
    }
    for(int i= 0; i<n; i++){ 
        cout<<arr[i]<<" ";
    }
}