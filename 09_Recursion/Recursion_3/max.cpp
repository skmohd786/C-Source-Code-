#include<iostream>
using namespace std;
void max(int arr[],int n,int mx){
    if(n == 0){
        cout<<mx;
        return;
    }
    if(arr[n-1] > mx){
        mx = arr[n-1];
    }
    max(arr,n-1,mx);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    max(arr,n,0);
}