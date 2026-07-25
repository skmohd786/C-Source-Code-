#include<iostream>   // when size is not given 
#include<vector>
using namespace std;  // when size is known use only 2 for loop like an array
int main(){
    vector<int>v;

    // for(int i= 0; i<5; i++){  // size is known
    //     cin>>v[i];
    // }
    for(int i =0; i<5; i++){
        int x;
        cin>>x;         // size is unknown
        v.push_back(x);
    }

    for(int i =0; i<5; i++){
        cout<<v[i]<<" ";
    }

}