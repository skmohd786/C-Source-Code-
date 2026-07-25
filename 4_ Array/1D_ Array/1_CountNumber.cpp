#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,2,4,2,6,2,8};
    int count = 0;
    int x;
    cout<<"Enter the value which repeats ";
    cin>>x;
    for(int i = 0; i<7; i++){
        if(arr[i]==x) {
            count++ ;
        }
        
    }
    if(count == 0) cout<<"X is not in the array";
    else cout<<count;
    

    
}
