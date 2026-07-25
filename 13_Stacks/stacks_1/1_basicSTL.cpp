#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    cout<<st.size()<<endl<<endl;
    cout<<st.top();


}