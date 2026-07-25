#include<iostream>
using namespace std;
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int x = 5;
    int count = 0;
    for(int i = 0; i<7; i++){
        for(int j = i+1; j<8; j++){
            if(arr[i]+arr[j] == x){
                cout<<"("<<i<<","<<j<<")"<<endl;
                count++;
            }
        }
    }
    cout<<count;



}