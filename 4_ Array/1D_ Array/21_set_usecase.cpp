// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<set>
using namespace std;
int main() {
    vector<int>a = {1,1,2,3,4,5,6,5,3,2,1,12};
    int n = a.size();
    set<int>dist;
    
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    for(int i =0;i<n;i++){
        dist.insert(a[i]);
    }
    
    vector<int>k(dist.begin(),dist.end());     // copying the element form the set usig range(index 0 t0 n-1)
    
    
    for(int i=0; i<k.size(); i++){      // or use the auto loop for the set; 
        cout<<k[i]<<" ";
    }

    // for(auto x: set name){
    //      cout<<x; or push back in the vector
}