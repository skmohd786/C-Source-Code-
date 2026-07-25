#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,3,2,6,7,8};
    int n = 6;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }       
    cout<<endl;

    for(int i = 0; i<n-1; i++){
        int min = INT_MAX;
        int mindex = -1;
        for(int j = i; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                mindex =j;
            }
        }
        swap(arr[i],arr[mindex]);
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }       
}