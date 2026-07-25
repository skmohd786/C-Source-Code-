#include<iostream>
using namespace std;

int main(){
    int arr[] = {10,5,2,6};              // contigous condition would be followed 
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 100;
    int count = 0;
    for(int i =0; i<n; i++){
        if(arr[i]<k){
            count++;
            cout<<i<<" ";
        }
        int product = 1;
        for(int j = i+1; j<n; j++){
            product *= arr[j];
            if((arr[i]*product)<k){
                cout<<"("<<i<<","<<j<<")"<<" ";
                count++;
            }

        }
    }
    cout<<endl<<endl;
    cout<<"Total Number of Subarrays in contiguous manner is: "<<count;
}  