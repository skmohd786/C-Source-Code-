#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,44,3,2,2};
    int sumOfEven = 0;
    int sumOfOdd = 0;
    for(int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        if(i%2 == 0) sumOfEven += arr[i];
        else sumOfOdd += arr[i];
    }
    cout<< (sumOfEven - sumOfOdd);
}