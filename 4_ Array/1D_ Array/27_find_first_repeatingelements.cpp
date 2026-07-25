#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;     // here use only the O(n) method to solve
int main(){
    int arr[] = {1,5,3,4,3,5,6,5,2,3,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j=i+1; j<n; j++){                        // O(n^2 )
            if(arr[i] == arr[j]) flag = true;
        }
        
        if(flag){
            cout<< arr[i];
            break;
        }
    }

    // other method to use it is hashing that is->


}