#include<iostream>
#include<vector>
using namespace std;

class Stack{       // user defined data structure
public:
    int arr[4];
    int idx;
    Stack(){
        idx = -1;
    }

    void push(int val){
        if(idx == 3){
            cout<<"stack is full"<<endl;    // similarly vector begin used(no overflow condition )
            return;
        }
        idx++;
        arr[idx] = val;
    }
    int top(){
        if(idx == -1){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void pop(){
        if(idx == -1){
            cout<<"stack is empty"<<endl;
            return;
        }
        idx--;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;

    // adding one more element in the stack

    st.push(120);
}