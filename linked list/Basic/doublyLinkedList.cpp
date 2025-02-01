#include<iostream>
using namespace std;
class Node {
    public:
        int data;
    Node * next;
    Node * prev;
};

void doublyLinkedListTraversal(Node * head) {
    Node * p = head;
    while (p != NULL) {
        cout << p -> data << " ";
        p = p -> next;
    }
    cout << endl;
}

void doublyLinkedListTraversalReverse(Node * head) {
    Node * p = head;
    while (p -> next != NULL) {
        p = p -> next;
    }
    while (p != NULL) {
        cout << p -> data << " ";
        p = p -> prev;
    }
    cout << endl;
}

Node * insertAtFirst(Node * head, int data) {
    Node * ptr = new Node();
    ptr -> data = data;
    ptr -> next = head;
    ptr -> prev = NULL;
    head -> prev = ptr;
    return ptr;
}

Node * insertAtIndex(Node * head, int data, int index) {
    Node * ptr = new Node();
    Node * p = head;
    int i = 0;
    while (i != index - 1) {
        p = p -> next;
        i++;
    }
    ptr -> data = data;
    ptr -> next = p -> next;
    ptr -> prev = p;
    if (p -> next != NULL) {
        p -> next -> prev = ptr;
    }
    p -> next = ptr;
    return head;
}

Node * insertAtEnd(Node * head, int data) {
    Node * ptr = new Node();
    Node * p = head;
    while (p -> next != NULL) {
        p = p -> next;
    }
    ptr -> data = data;
    ptr -> next = NULL;
    ptr -> prev = p;
    p -> next = ptr;
    return head;
}

Node * deleteAtFirst(Node * head) {
    Node * p = head;
    head = head -> next;
    head -> prev = NULL;
    delete p;
    return head;
}

Node * deleteAtIndex(Node * head, int index) {
    Node * p = head;
    int i = 0;
    while (i != index - 1) {
        p = p -> next;
        i++;
    }
    Node * q = p -> next;
    p -> next = q -> next;
    if (q -> next != NULL) {
        q -> next -> prev = p;
    }
    delete q;
    return head;
}

Node * deleteAtEnd(Node * head) {
    Node * p = head;
    while (p -> next != NULL) {
        p = p -> next;
    }
    p -> prev -> next = NULL;
    delete p;
    return head;
}

int main() {
    Node * head = new Node();
    Node * second = new Node();
    Node * third = new Node();
    Node * fourth = new Node();
    head -> data = 7;
    head -> next = second;
    head -> prev = NULL;
    second -> data = 11;
    second -> next = third;
    second -> prev = head;
    third -> data = 66;
    third -> next = fourth;
    third -> prev = second;
    fourth -> data = 45;
    fourth -> next = NULL;
    fourth -> prev = third;
    cout << "Doubly Linked List before insertion: ";
    doublyLinkedListTraversal(head);
    head = insertAtFirst(head, 56);
    cout << "Doubly Linked List after insertion at first: ";
    doublyLinkedListTraversal(head);
    head = insertAtIndex(head, 99, 2);
    cout << "Doubly Linked List after insertion at index 2: ";
    doublyLinkedListTraversal(head);
    head = insertAtEnd(head, 23);
    cout << "Doubly Linked List after insertion at end: ";
    doublyLinkedListTraversal(head);
    head = deleteAtFirst(head);
    cout << "Doubly Linked List after deletion at first: ";
    doublyLinkedListTraversal(head);
    head = deleteAtIndex(head, 2);
    cout << "Doubly Linked List after deletion at index 2: ";
    doublyLinkedListTraversal(head);
    head = deleteAtEnd(head);
    cout << "Doubly Linked List after deletion at end: ";
    doublyLinkedListTraversal(head);
    cout << "Doubly Linked List in reverse: ";
    doublyLinkedListTraversalReverse(head);
    return 0;
}