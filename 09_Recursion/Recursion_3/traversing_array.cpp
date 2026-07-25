#include<iostream>
using namespace std;
void rec(int arr[],int n,int idx){
    if(idx >= n) return;
    cout<<arr[idx]<<" ";
    rec(arr,n,idx+1); 
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    rec(arr, n,0);
}