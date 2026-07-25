#include<iostream>
#include<stack>
using namespace std;

void displayrev(stack<int>&st){   // reverse wrt bottom to top
    if(st.size() == 0) return;

    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    displayrev(st);
    st.push(x);       // diplay kraya hai actual order same hi hai 

}

int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    displayrev(st);
}