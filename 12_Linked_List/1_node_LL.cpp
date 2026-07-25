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
    // a.val = 10;
    Node b(20);
    // b.val = 20;
    Node c(30);
    // c.val = 30;
    Node d(40);
    // d.val = 40;
    // forming the linked list

    // a.next = &b;
    // b.next = &c;
    // c.next = &d;
    // d.next = NULL;
    cout<<&a<<" "<<a.next;

}