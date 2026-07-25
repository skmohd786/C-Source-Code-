#include <iostream> 
#include <queue>
#include<stack>
using namespace std;

class Queue{
public:
    int f;
    int b;
    int arr[5];

    Queue(){
        f = 0;
        b = 0;
    }

    void push(int val){
        if(b == 5){
            cout<<"Queue is full";
            return;
        } 
        arr[b++] = val;   // back se insert hoga 
    }

    void pop(){
        if(f-b == 0){
            cout<<"Queue is empty";
            return;
        }
        f++;  // front se hota hai
    }

    int front(){
        if(f-b == 0){
            cout<<"Queue is empty";
            return -1;
        }
        return arr[f];
    }

    int back(){
        if(f-b == 0){
            cout<<"Queue is empty";
            return -1;
        }
        return arr[b-1];

    }

    int size(){
        return b-f;
    }

    bool emplty(){
        if(f-b == 0) return true;
        else  return false;
    }

    void display(){
        for(int i= f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Queue q;        // object bn gya with default constructor called automatically 

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);     // 10 20 30 40 50 

    q.display();

    q.pop();

    q.display();
}