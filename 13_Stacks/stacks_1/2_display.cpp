#include<iostream>
#include<stack>          // display preserving the stack elements
using namespace std;

int main(){

    stack<int>st;
    stack<int>temp;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while(st.size() > 0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    // putting elements back in the st;
    cout<<endl;


    while(temp.size() > 0){
        cout<<temp.top()<<" ";       // (bottom to top) using O(n) space used
        st.push(temp.top());
        temp.pop();        // preserver the stack by doing this 
    }
    cout<<endl;

    cout<<st.top();

}