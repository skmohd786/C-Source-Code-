#include<iostream>
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
void pushAtBottom(stack<int>&st,int val){
    if(st.size() == 0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}
void reverseStack(stack<int>&st){
    if(st.size() == 1){
        return;
    }
    int x = st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st,x);
}
int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    print(st);
    cout<<endl;
    reverseStack(st);
    print(st);
}
