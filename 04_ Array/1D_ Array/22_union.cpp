#include<iostream>    // two sorted array given which is like
#include<vector>     // using two pointer method but on other method use set and then diplay the elements
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

    vector<int>r;

    int a = 0,b=0;

    while(a<n1 && b<n2){

        if((a+1)<n1 && v1[a] == v1[a+1]) a++;       // a+1 n se n-1 se small hona chahiyes
        if((b+1)<n2 && v2[b] == v2[b+1]) b++;           // b+1 n2-1 se small hona chahiye 

        if(v1[a] == v2[b]){
            r.push_back(v1[a]);
            a++;
            b++; 
        }
        else if(v1[a]<v2[b]){
            r.push_back(v1[a]);        // order bhi maintain krna hai 
            a++;
        }
        else if(v1[a]>v2[b]){
            r.push_back(v2[b]);
            b++;
        }
       
    }

    while(b<n2){
        r.push_back(v2[b]);
        b++;
    }
   
    while(a<n1){
        r.push_back(v1[a]);
        a++;
    }
    
    
    print(r);
}
