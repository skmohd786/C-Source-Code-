#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    vector<int>s = {1,2,3,4,0,12,0,0,5}; //use vector intead of array
    int n = s.size();
    for(int i = 0; i<n-1 ; i++){
        bool flag = true;
        for(int j = 0 ;j<n-1-i; j++){
            if(s[j]==0){   
                swap(s[j],s[j+1]); 
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i = 0; i<n; i++){
        cout<<s[i]<<" ";
    }

}