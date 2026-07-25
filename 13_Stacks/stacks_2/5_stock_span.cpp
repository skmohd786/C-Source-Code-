#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    vector<int>arr = {100,80,60,81,70,60,75,85};
    int n = arr.size();
    for(int i=0; i<n; i++){      // instead of using the other array same array updated;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int>res(n);

    st.push(0);       // indexing ke khelo
    res[0] = -1;

    for(int i=1;i<n;i++){
        while(st.size()> 0 && arr[i]>=arr[st.top()]) st.pop();

        if(st.size() == 0) res[i] = -1;     // imp to focus

        else res[i] = st.top();    // ele change ho rha hai
        st.push(i);
    }
    for(int i=0; i<n; i++){
        res[i] = i-res[i];     // for the difference that calculates the span;
    }

    for(int i=0; i<n;i++){
        cout<<res[i]<<" ";
    }
}