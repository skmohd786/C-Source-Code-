// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,1,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int a = 0;
    int b = 1;
    print(arr,n);
    
    while(b<n){
        if(arr[a] != arr[b]){
            a++;
            arr[a] = arr[b];
        } 
        else b++;
    }
    print(arr,n);
    cout<<a+1;
}