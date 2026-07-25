#include<iostream>    // two sorted array given which is like
#include<vector>
using namespace std;
void print(vector<int>&v){
    int n = v.size();
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int>v1 = {1,1,2,2,3,4,5,6};
    vector<int>v2 = {4,4,5,6,12,14,54,123};

    int n1 = v1.size();
    int n2 = v2.size();       
     // this is two pointer method but
    // but brute force me nested loop use krlo for every elements
    vector<int>r;

    int a = 0,b=0;
    
    print(v1);
    print(v2);

    while(a<n1 && b<n2){

        if(v1[a] == v2[b]){
            r.push_back(v1[a]);
            a++;
            b++; 
        }
        else if(v1[a]<v2[b]) a++;
        else b++;
       
    }

    print(r);
}
