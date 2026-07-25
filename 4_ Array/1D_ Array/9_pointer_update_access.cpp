#include<iostream>  // using pointer we have to perform operations
using namespace std;
int main(){
    int arr[] = {1,2,3,4,3,22,42,53,66};
    int n = sizeof(arr)/sizeof(arr[0]);
    int* ptr = arr;
    for(int i=0; i<n; i++){
        cout<<*ptr<<" ";       // using pointer we can access the array use ptr[i] or *ptr & ptr++
        ptr++;  //increase by 4 bit 
    }
    cout<<endl;
    //update 
    ptr = arr;

    *ptr = 8;
    ptr++;           // focus on the pointer moving by 4bit 
    *ptr = 12;
    ptr--;

    for(int i = 0; i<n; i++){      // the pointer is moving continously 
        cout<<ptr[i]<<" ";
    }




    

}