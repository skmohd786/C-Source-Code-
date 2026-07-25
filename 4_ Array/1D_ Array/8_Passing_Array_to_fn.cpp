#include<iostream>
using namespace std;  // pass by reference hota hai  

void change(int arr[]){
    arr[0] = 12;
}
void display(int a[],int n){
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    display(arr,size);
    cout<<endl;
    change(arr);
    display(arr,size);
}