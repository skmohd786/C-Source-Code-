#include<iostream>  // two pointer
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
void reverse_part(vector<int>&s,int si, int ei){
    while(si<ei){
        int temp = s[si];
        s[si] = s[ei];
        s[ei] = temp;
        si++;
        ei--;
    }
    display(s);
}
int main(){
    vector<int>v = {1,2,3,4,5,6,12,13,55};
    int i = 0;
    int j = v.size()-1;
    display(v);
    cout<<endl;

    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);
    cout<<endl;

    reverse_part(v,2,7);


}