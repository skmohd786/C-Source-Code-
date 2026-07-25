#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
void reverse_part(int i,int j,vector<int>&v){
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int k;
    cout<<"Enter the value of k ";
    cin>>k;
    cout<<endl;
    vector<int>v = {1,2,3,4,5,6};
    int n = v.size();
    if(k>n) k = k%n;
    display(v);
    cout<<endl;
    reverse_part(0,n-k-1,v);
    reverse_part(n-k,n-1,v);
    reverse_part(0,n-1,v);
    display(v);
}