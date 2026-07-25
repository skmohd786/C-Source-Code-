#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i = 0; i<v.size(); i++){
        cout<<v[i];
    }
}
void sort(vector<int>&v){
    int n = v.size();
    int noo = 0, noz = 0;
    for(int i =0; i<n; i++){
        if(v[i] ==0) noz++;     // store
        else noo++;
    }
    for(int i=0; i<n; i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1;
    }
}
int main(){
    vector<int>v = {1,0,1,0,0,0,1,1,1,0};
    display(v);
    cout<<endl;
    sort(v);
    display(v);
}