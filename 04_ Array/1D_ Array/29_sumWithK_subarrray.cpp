#include<iostream>
#include<algorithm>
using namespace std;     // subarray using the loop in this problems() // brute force approach
int main(){
    int arr[] = {1,2,3,4,1,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 7;

    int len = INT_MIN;
    for(int i=0; i<n; i++){

        for(int j=i; j<n; j++){

            int sum =0;
            int count = 0;
            for(int k = i; k<=j; k++){
                sum += arr[k];
                
            }


            if(sum==k){ // for getting the longest
                len = max(len,j-i+1);
                for(int l =i; l<=j; l++){
                    cout<<arr[l]<<" ";
                }
                cout<<endl;

            }       
        }
    }

    cout<<len;
}