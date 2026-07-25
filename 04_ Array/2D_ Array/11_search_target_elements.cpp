#include<iostream>
#include<vector>
using namespace std;      // only optimised method is done here(O(n)) only complexity;

void print(vector<vector<int>>&v){
    int r = v.size();
    int c = v[0].size();

    for(int i =0; i<r; i++){
        for(int j =0; j<c; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int>(n));

    for(int i =0;i<m;i++){
        for(int j =0; j<n;j++){
            cin>> v[i][j];
        }
    }

    print(v);

    int target = 12;
    bool flag = false;

    int i = 0;
    int j = n-1;
 
    while(i<=n && j>=0){       // imp to undestand the algo
        if(v[i][j] == target){
            flag = true;
            break;
        }
        else if(v[i][j]>target) j--;       // column ko increase kro
        else{
            i++;   // row ko increase kro 
        }
    }

    
    if(flag) cout<<"target present in the matrix";
    else{
        cout<<"target is not present in the matrix";
    }
}

