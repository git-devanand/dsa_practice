#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int val = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<val<<"\n";
    }
};

class DoublyLinkedList {
public:
    // traversing a linked list
    void printLL(Node* head) {
        Node* temp = head;

        while(temp != NULL){
            cout<<temp->data<<" <-> ";
            temp = temp->next;
        }
        cout<<"\n";
    }

    // get length of linked list
    int getLength(Node* head) {
        Node* temp = head;
        int length = 0;

        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        return length;
    }

    // insetion at head
    void insertAtHead(Node* &head, Node* &tail, int d) {
        // empty list
        if(head == NULL){
            Node* temp = new Node(d);
            head = temp;
            tail = temp;
        }
        else {
            // 1. create a temp node with value d
            Node* temp = new Node(d);
            // 2.
            temp->next = head;
            // 3.
            head->prev = temp;
            // 4.
            head = temp;
        }
    }

    // insertion at tail
    void insertAtTail(Node* &head, Node* &tail, int d) {
        // empty list
        if(tail == NULL) {
            Node* temp = new Node(d);
            head = temp;
            tail = temp;
        }
        else {
            Node* temp = new Node(d);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    // insert at poristion
    void insertAtPosition(Node* &head, Node* &tail, int position, int d) {
        if(position == 1) {
            insertAtHead(head, tail, d);
            return ;
        }

        Node* temp = head;
        int cnt = 1;
        while(cnt<position-1){
            temp = temp->next;
            cnt++;
        }

        if(temp->next == NULL) {
            insertAtTail(head, tail, d);
            return ;
        }

        // create a new node with value d
        Node* nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next->prev = nodeToInsert;
        temp->next = nodeToInsert;
        nodeToInsert->prev = temp;
    }

    // deletion of a node at a given position
    void deleteNode(Node* &head, Node* &tail, int position) {
        if(position == 1) {
            Node* temp = head;
            temp->next->prev = NULL;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else {
            // deleting any node middle or last
            Node* curr = head;
            Node* prevs = NULL;
            int cnt = 1;
            while(cnt<position){
                prevs = curr;
                curr = curr->next;
                cnt++;
            }

            curr->prev = NULL;
            prevs->next = curr->next;
            if(curr->next == NULL){
                tail = prevs;
            }
            curr->next = NULL;
            delete curr;
        }


    }
};


int main()
{
    DoublyLinkedList dll;

    Node* head = NULL;
    Node* tail = NULL;

    dll.printLL(head);

    dll.insertAtHead(head, tail, 8);
    dll.printLL(head);

    dll.insertAtHead(head, tail, 7);
    dll.printLL(head);

    dll.insertAtTail(tail, tail, 22);
    dll.printLL(head);

    dll.insertAtTail(tail, tail, 25);
    dll.printLL(head);

    dll.insertAtPosition(head, tail, 3, 9);
    dll.printLL(head);

    dll.deleteNode(head, tail, 1);
    dll.printLL(head);

    dll.deleteNode(head, tail, 3);
    dll.printLL(head);

    dll.deleteNode(head, tail, 3);
    dll.printLL(head);


    cout<<"Head:\t"<<head->data<<"\n";
    cout<<"Tail:\t"<<tail->data<<"\n";


    cout<<"Length:\t"<<dll.getLength(head)<<"\n"; 

}