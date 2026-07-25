#include<iostream>   // using reverse loop
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,4,5,6,7,12};
    int x = 4;
    for(int i=(v.size()-1); i>=0; i--){
        if(v[i] == x){
            cout<<"Last occurance of the 4 is "<<i;
            break;
        } 
       
    }
}