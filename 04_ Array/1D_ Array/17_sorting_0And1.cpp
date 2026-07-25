#include<iostream>      // 3 pointer problem imp to focus on the algo
#include<vector>
using namespace std;
void display(vector<int>&v){
    int n = v.size();
    for(int i=0; i<n; i++){        // two pointer used herec
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v = {1,0,0,1,1,0,1,0,1,0};
    int n = v.size();
    int i =0;
    int j = n-1;
    display(v);
    

    while(i<j){
        if(v[i]==1 && v[j]==0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        if((v[i]==0)) i++;
        if(v[j]==1)  j--;
    }
    display(v);

}