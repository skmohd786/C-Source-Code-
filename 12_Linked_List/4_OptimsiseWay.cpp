#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;         // initially 
        this->next = NULL;
    }
};

void display(Node* head){

    Node* temp = head;       // no need of the temp 
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;  // moving to the next node 
    }
}

void displayRec(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);

}
    

int size(Node* head){

    Node* temp = head;
    int n=0;
    while(temp != NULL){
        n++;
        temp = temp->next;  // moving to the next node with the reference 
    }
    return n;

}

void insertAtEnd(Node* head,int val){
    Node* t = new Node(val); 
    while(head->next != NULL) head = head->next;
    head->next = t;

}
int main(){
    Node* a = new Node(10);            // all 4 are now a pointer to easy to access every where 
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;


    // now for printing

    Node* temp = a;    // pass by value with reference of a 

    // while(temp != NULL){   // display the LL with temp pointer so make the funtion,
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }

    display(a);    // passing the first node 
    cout<<endl;
    cout<<"size is "<<size(a);



    cout<<endl;
    cout<<a->next->val<<" ";  // val of b
    cout<<a->next->next->val<<" ";  // val of c
    cout<<a->next->next->next->val;  // val of d
    cout<<endl;

    displayRec(a);
    cout<<endl;
   
    insertAtEnd(a,50);
    display(a);
    

}

 