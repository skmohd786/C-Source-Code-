#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

void print(stack<char>&st){
    if(st.size() == 0) return;
    char x = st.top();
    st.pop();
    print(st);
    cout<<x<<" ";

}
string removeDuplicate(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(s[i] != st.top()) st.push(s[i]);
    }
    s = ""; // vacant same string mere pas stack filled hai usko ab 

    while(st.size() >0){
        s += st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;

}

int main(){
    
    string s = "aaabbcddaabffg";

    cout<<removeDuplicate(s);
}
