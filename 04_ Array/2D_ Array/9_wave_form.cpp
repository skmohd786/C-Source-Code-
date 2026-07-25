#include<iostream>       // colon wise priting 
using namespace std;

void print(int arr[3][3],int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr,n);   
    cout<<endl;

    for(int i=0;i<n;i++){
        if(i%2 == 0){
            for(int j =0;j<n;j++){
                cout<<arr[j][i]<<" ";         // imp to notice the algo of this code
            }

        }
        else{
            for(int j=2;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
    }
    // print(arr,n);

}