#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;          // using constructor for the direct initialisation
        this->next = NULL;       // linked list Node = -- null in every node of next
    }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;          // connection of the linked lists
    c.next = &d;
    d.next = NULL;

    Node* ptr = &b;       // using the external pointer 
    cout<<((*ptr).val)<<endl; 
    cout<<ptr->val<<endl;

    ptr->val = 30; // value changed    
    cout<< ptr->val;
    cout<<endl<<endl;



    // using the next pointer present in the first node

    cout<<(a.next)->val<<endl;    // print 
    (a.next)->val = 20;        // changes the value 
    cout<<(a.next)->val<<endl;       // then again prints 
    cout<<b.val;

    // accesing the other node with intials node adress 
    cout<<endl;
    cout<<(a.next)->next->next->val;  // d ki value acces ho gyi

    





    

}