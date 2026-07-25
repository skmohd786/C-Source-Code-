// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>>&v){
    int r = v.size();
    for(int i =0;i<r;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main() {
    vector<vector<int>>v;
    for(int i =0; i<5; i++){   // imp to focus here vector taken as input directly
        vector<int>s(i+1,9);
        v.push_back(s);
    }
    
    print(v);
    
    for(int i =0;i<5;i++){
        for(int j =0; j<v[i].size();j++){
            if(j == 0  || j == v[i].size()-1) v[i][j] = 1;
            else{
                v[i][j] = v[i-1][j] + v[i-1][j-1];   // focus
            }
        }
    }
    print(v);
}