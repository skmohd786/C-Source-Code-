#include<iostream>
using namespace std;
void swap(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}
int main(){
    int arr[3] = {1,3,4};
    cout<<arr[0]<<" "<<arr[1]<<endl;
    swap(arr);
    cout<<arr[0]<<" "<<arr[1];
}