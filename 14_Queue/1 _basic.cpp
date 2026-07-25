#include <iostream> 
#include <queue>
#include<stack>
using namespace std;

void display(queue<int>&q){
    int n = q.size();

    while(n>0){
        int x = q.front();
        cout<<x<<" ";
        q.pop(); 
        q.push(x);
        n--;
    }
    cout<<endl;
}
void reverse(queue<int>&q){
    stack<int>st;
    int n = q.size();
    // empty the queue into stack + more focus on varible (n pass by value)
    while(n){
        int x = q.front(); 
        st.push(x);
        q.pop();
        n--;
    }
    // emplty the stack into queue
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    display(q);
}
void removeAtevenIndex(queue<int>q){ 
    int n = q.size();

    for(int i=0; i<n; i++){
        if(i%2 ==0) q.pop();
        else{
            int x =q.front();
            q.pop();
            q.push(x);
        }
    }
    display(q);
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<q.front();
    cout<<endl;

    cout<<q.back();
    cout<<endl;

    cout<<q.size();     // front, back, push, pop, size, empty
    cout<<endl;

    display(q);
    reverse(q);

    removeAtevenIndex(q);
    
}