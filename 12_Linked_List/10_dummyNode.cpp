// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};
void print(Node* head){
    Node*temp = head;
    
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
Node* dummy(Node* head){
    Node* d = new Node(-1);
    Node*res = d; 
    
    Node* temp = head;
    
    while(temp){
        Node* newNode = new Node(temp->val);
        res->next = newNode;
        res = newNode;
        temp = temp->next;
    }
    return d->next;
}


int main() {
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    
    a->next = b;
    b->next = c;
    c->next = d;
    
    print(dummy(a));
    
}
