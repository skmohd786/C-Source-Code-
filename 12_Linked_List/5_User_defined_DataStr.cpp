#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;          
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){        // default constructor is called
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp =new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    } 

    void inserAtHead(int val){
        Node * temp = new Node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
            
        }
        size++;
        
    }

    void insertAtIdx(int idx ,int val){
        if(idx == 0) inserAtHead(val);
        else if(idx == size) insertAtEnd(val);
        else if(idx<0 || idx>size) cout<<"invalid error";
        else{
            Node*t = new Node(val);
            Node * temp = head;
            for(int i =1; i<= idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;            
        }
    }

    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size-1) return tail->val;
        else{
            Node*temp = head;
            for(int i=1; i<=idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size == 0){
            cout<<"ll is empty";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtTail(){
        Node*temp = head;
        if(size == 0){
            cout<<"list is empty";
            return;
        }
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid index";
            return;
        }
        else if(idx == 0) return deleteAtHead();
        else if(idx == size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1; i<idx; i++){          // at idx - 1
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }

    }
    void display(){
        Node* temp = head;      // use temp so that head posn fixed at first node 
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    cout<<ll.size<<endl;
    ll.inserAtHead(30);
    ll.display();
    ll.inserAtHead(40);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtIdx(1,50);
    ll.display();
    cout<<ll.getAtIdx(3)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
}