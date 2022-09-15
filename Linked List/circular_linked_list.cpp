#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int val = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data value "<<val<<"\n";
    }
};

class CircularLinkedList {
public:
    // insert a node
    void insertNode(Node* &tail, int element, int d) {
        // assume that the element is present in the list
        // empty list
        if(tail == NULL){
            Node* newNode = new Node(d);
            tail = newNode;
            newNode->next = newNode;
        }
        else {
            // assume that the element is present in the list
            // non-empty list
            Node* curr = tail;

            while(curr->data != element) {
                curr = curr->next;
            }

            // element found and the curr is at the position
            Node* temp = new Node(d);
            temp->next = curr->next;
            curr->next = temp;
        }

    }

    // traverse
    void printLL(Node* &tail) {
        Node* temp = tail;
        if(tail == NULL){
            cout<<"List is Empty\n";
            return ;
        }
        do{
            cout<<tail->data<<" ";
            tail = tail->next;
        } while(tail->next != temp);
        cout<<"\n";
    }

    // deletion in circular list
    void deleteNode(Node* &tail, int value) {
        // empty list
        if(tail == NULL){
            cout<<"Empty List! Please check again.\n";
            return ;
        }
        else {
            // Assume that the value is present in the list
            // non-empty list
            Node* prev = tail;
            Node* curr = prev->next;
            while(curr->data != value){
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
            // 1 Node list
            if(tail == prev){
                tail = NULL;
            }
            // #Node >= 2
            if(tail == curr) {
                tail = prev;
            }
            curr->next = NULL;
            delete curr;

        }
    }
};

int main()
{
    CircularLinkedList cll;
    Node* tail = NULL;

    cll.insertNode(tail, 5, 3);
    cll.printLL(tail);

    // cll.insertNode(tail, 3, 5);
    // cll.printLL(tail);

    // cll.insertNode(tail, 5, 7);
    // cll.printLL(tail);

    // cll.insertNode(tail, 7, 9);
    // cll.printLL(tail);

    // cll.deleteNode(tail, 9);
    // cll.printLL(tail);

    cll.deleteNode(tail, 3);
    cll.printLL(tail);
}