#include<iostream>
#include<stack>
#include<vector>      // pop ans push
using namespace std;
int main(){
    stack<int>st;
    vector<int>arr = {3,1,3,7,4,6,2,3};
    int n = arr.size();
    for(int i=0; i<n; i++){      // instead of using the other array same array updated;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    st.push(arr[n-1]);
    arr[n-1] = -1;       // last me -1 hi hoga 
    
    for(int i=n-2;i>=0;i--){
        int curr = arr[i];
        while(st.size()> 0 && arr[i]>=st.top()) st.pop();
        if(st.size() == 0) arr[i] = -1;
        else arr[i] = st.top();    // ele change ho rha hai
        st.push(curr);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



}