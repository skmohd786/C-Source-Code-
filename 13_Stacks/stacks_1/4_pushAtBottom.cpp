#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>st){
    stack<int>temp;
    while(st.size() > 0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size() > 0){
        st.push(temp.top());
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;   
}
void pushAtIdx(stack<int>&st,int i,int val){
    stack<int>temp;
    while(st.size() > i){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}

int main(){
    stack<int>st;
    stack<int>temp;
    int val = 70;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    print(st);

    while(st.size() > 0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }
    print(st);
    pushAtIdx(st,2,100);
    print(st);
}