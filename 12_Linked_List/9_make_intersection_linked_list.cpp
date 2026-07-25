#include <iostream>
using namespace std;

// structure of list node
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// function to insert node at end
void insert(Node*& head, int val) {
    if (head == NULL) {
        head = new Node(val);
        return;
    }
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = new Node(val);
}

// function to print linked list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// intersection logic (your code)
Node* findIntersection(Node* head1, Node* head2) {
    Node* head = NULL;
    Node* tail = NULL;

    Node* p1 = head1;
    Node* p2 = head2;

    while (p1) {
        p2 = head2;   // IMPORTANT reset
        while (p2) {
            if (p1->data == p2->data) {
                Node* newNode = new Node(p1->data);

                if (head == NULL) {
                    head = tail = newNode;
                } else {
                    tail->next = newNode;
                    tail = newNode;
                }
                break;
            }
            p2 = p2->next;
        }
        p1 = p1->next;
    }

    return head;
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    // first list
    insert(head1, 1);
    insert(head1, 2);
    insert(head1, 3);
    insert(head1, 4);
    insert(head1, 5);

    // second list
    insert(head2, 3);
    insert(head2, 4);
    insert(head2, 5);
    insert(head2, 6);

    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    Node* result = findIntersection(head1, head2);

    cout << "Intersection: ";
    if (result == NULL) {
        cout << "No intersection";
    } else {
        printList(result);
    }

    return 0;
}
