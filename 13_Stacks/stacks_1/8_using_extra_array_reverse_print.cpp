#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void print(stack<int>&st){
    if(st.size() == 0) return;
    int x= st.top();
    st.pop();
    print(st);
    st.push(x);
    cout<<st.top()<<" ";
}
int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    vector<int>arr;
    print(st);

    while(st.size() > 0){
        int x = st.top();
        st.pop();
        arr.push_back(x);
    }
    for(int i=0; i<arr.size(); i++){
        st.push(arr[i]);   // now again copy the elements from the array into the stack that make it reverse
    }
    cout<<endl;

    print(st);
}