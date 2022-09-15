#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free for the node with value "<<value<<"\n";
    }
};

class SinglyLinkedList {
public:
    // linked list traversal, operations insertion deletions

    // insert at head
    void insertAtHead(Node* &head, int d){
        // new node create
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }

    // insert at tail
    void insertAtTail(Node* &tail, int d){
        //new node create
        Node* temp = new Node(d);
        tail->next = temp;
        tail = tail->next;
    }

    // insert at any position
    void insertAtPosition(Node* &head, Node* &tail, int position, int d){
        // insert at start
        if(position==1){
            insertAtHead(head, d);
            return ;
        }

        Node* temp = head;
        int cnt = 1;
        while(cnt<position-1){
            temp = temp->next;
            cnt++;
        }

        // insert at end
        if(temp->next==NULL){
            insertAtTail(tail, d);
            return;
        }

        // creating a node for d
        Node* nodeToInsert = new Node(d);
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }

    // deletion of any node
    void deleteNode(Node* &head, Node* &tail, int position){
        if(position==1){
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        else {
            Node* curr = head;
            Node* prev = NULL;
            int cnt=1;
            while(cnt<position){
                prev = curr;
                curr = curr->next;
                cnt++;
            }

            prev->next = curr->next;
            if(curr->next == NULL){
                tail = prev;
            }
            curr->next = NULL;
            delete curr;
        }
    }

    // traversal of linked list
    void printLL(Node* &head){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"\n"; 
        
    }

    // get size of linked list
    int getLength(Node* &head){
        Node* temp = head;
        int length = 0;
        while (temp!=NULL)
        {
            length++;
            temp = temp->next;
        }
        return length; 
        
    }
};



int main()
{
    // created new node
    SinglyLinkedList sll;
    Node* node1 = new Node(10);
    // cout<< node1->data <<"\n";
    // cout<< node1->next<<"\n";

    Node* head = node1;
    Node* tail = node1;
    sll.printLL(head);

    sll.insertAtTail(tail, 12);
    sll.printLL(head);

    sll.insertAtTail(tail, 15);
    sll.printLL(head);

    sll.insertAtPosition(head, tail, 2, 14);
    sll.printLL(head); 
    
    sll.insertAtPosition(head, tail, 1, 9);
    sll.printLL(head);

    sll.insertAtPosition(head, tail, 6, 23);
    sll.printLL(head);

    sll.deleteNode(head, tail, 4);
    sll.printLL(head);

    sll.deleteNode(head, tail, 1);
    sll.printLL(head);

    sll.deleteNode(head,tail, 4);
    sll.printLL(head);

    cout<<"Head -> "<<head->data<<"\n";
    cout<<"Tail -> "<<tail->data<<"\n";
}