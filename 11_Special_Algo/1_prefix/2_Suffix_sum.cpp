#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    for(int i=n-2;i>=0;i--){
        arr[i] += arr[i+1];    // similaly suffix product be formed
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}