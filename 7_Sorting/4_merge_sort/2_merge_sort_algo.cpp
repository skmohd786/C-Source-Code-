#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a, vector<int>b ,vector<int>&res){
    int i = 0;   //in a,b,c
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k] = a[i];    // here elements of res vector updated cont...
            i++;
            k++;
        }
        else{  // a[i]>=b[j]
            res[k] = b[j];
            k++;
            j++;
        }
    }
    if(i == a.size()){  // a is full then take elements of b in res
        while(j<b.size()){
            res[k] = b[j];
            k++;
            j++;
        }
    }
    
    if(j == b.size()){
        while(i<a.size()){
            res[k] = a[i];
            i++;
            k++;
        }
    }
}
void mergesort(vector<int>&v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-n/2;
    vector<int>a(n1) , b(n2);
    //copy pasting after breaking into parts of arrays elements

    for(int i = 0; i<n1; i++){
        a[i] = v[i];
    }
    for(int i = 0;i<n2;i++){
        b[i] = v[i+n1];
    } // now second task is magic is recursion
    mergesort(a);
    mergesort(b);
    // now merge two array

    merge(a,b,v);
    a.clear();
    b.clear();    // delete the array or vector inorder to stop from bulking of space covered,
}

int  main(){

    int arr[]  = {1,2,12,222,4,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergesort(v);

    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

}