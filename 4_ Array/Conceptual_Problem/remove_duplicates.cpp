#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<climits>
void print(vector<int>&v){
    int n  = v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr = {1,1,2,2,2,3,3,3,4,4,5,5};
    int n  = arr.size();
    print(arr);

    int i = 0;
    for(int j =1;j<n;j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    arr.erase(arr.begin()+i+1,arr.end());
    

    // final output is->
    print(arr);

}