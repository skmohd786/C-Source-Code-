#include<iostream>
using namespace std;
int main(){
    
    int n, max = INT_MIN, smax = INT_MIN;
    cout<<"Enter the size of the array ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];    // input
        
    }

    for(int i=0; i<n;i++){   // printing the elements
        cout<<arr[i]<<" ";                           // note-> handle duplicate as well(dist) -> {1,2,3,3} -> then 3,2 ans hoga

    }                                      // if duplucates  matterns then -> find that index(idx) then same cond with i(dx)
    cout<<endl;

    for(int i=0; i<n;i++){
        if(max<arr[i]){
            smax = max;         // assign and reassign
            max= arr[i];
        }
        else if(smax!=max && smax<arr[i]){     // to make suree that smax can flow easily when max is locked
            smax = arr[i];
        }
    }
    cout<<max<<endl<<smax;   // for visualization ->  take desc sorted array and then do operations
} 