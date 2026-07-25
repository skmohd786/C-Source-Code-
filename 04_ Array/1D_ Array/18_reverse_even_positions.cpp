// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>&v){
    int n = v.size();
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

void reversepart(vector<int>&v){
    int i =0;
    int n = v.size();
    int j = n-1;
    while(j>=i){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main() {
    vector<int>s = {1,2,3,4,5,7};
    int n = s.size();
    vector<int>v;
    // Write C++ code here

    
    print(s);
    
    for(int i =0; i<n; i++){
        if(i %2 == 0){
            v.push_back(s[i]);
        }
    }

    print(v);
    
    reversepart(v);
    
    print(v);

    int a = 0;
    for(int i =0; i<n;i++){
        if(i% 2 == 0){
            s[i] = v[a];
            a++;
        }
    }
    
    cout<<"the final version of code that reverse only the even positions inthe array is-> ";
    print(s);
    
    

    
}