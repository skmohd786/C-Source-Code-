#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {3,1,2,7,4,6,2,3};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v.size();i++){
        bool flag = false;
        for(int j=i+1;j<v.size();j++){
            if(v[j]>v[i]){
                v[i] = v[j];
                flag = true;
                break;
            }
        }
        if(!flag) v[i] = -1;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}