#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&s){
    for(int i=0; i<(s.size()); i++){
        cout<<s[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);

    vector<int>v1(v.size());

    for(int i=0; i<v1.size(); i++){
        v1[i] = v[v.size()-i-1];
    }
    cout<<endl;
    display(v1);

}