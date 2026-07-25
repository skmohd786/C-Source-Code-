#include<iostream>
#include<stack>          // display preserving the stack elements
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
int main(){

    stack<int>st;
    stack<int>temp;
    stack<int>tempn;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);

    while(st.size() > 0){
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;

    while(temp.size() > 0){
        tempn.push(temp.top());
        temp.pop();
    }

    while(tempn.size() > 0){
        st.push(tempn.top());
        tempn.pop();
    }
    print(st);

}