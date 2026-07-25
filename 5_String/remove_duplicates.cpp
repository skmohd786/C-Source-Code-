#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    string s = "programming";
    // int arr[] = {1,2,3,4,1,2,3,4,1,2,3,5,5,6,7,8,34,21};
    // int n = sizeof(s)/sizeof(s[0]);
    // cout<<n;
    int n = s.size();
    string r;          // brute force approach T.C=> O(n^2) and space O(n)


    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j =0; j<s.size();j++){
            if(s[i] == r[j]){
                flag = true;
                break;
            }
        }
        if(!flag) r.push_back(s[i]);
    }

    for(int i=0; i<r.size();i++){
        cout<<r[i]<<" ";
    }





}