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

void insertAtHead(Node* &head, int d){
    // new node create
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    //new node create
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

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

void deleteNode(Node* &head, int position){
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
        while(cnt<=position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void printLL(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"\n"; 
    
}

int main()
{
    // created new node
    Node* node1 = new Node(10);
    // cout<< node1->data <<"\n";
    // cout<< node1->next<<"\n";

    Node* head = node1;
    Node* tail = node1;
    printLL(head);

    insertAtTail(tail, 12);
    printLL(head);

    insertAtTail(tail, 15);
    printLL(head);

    insertAtPosition(head, tail, 2, 14);
    printLL(head); 
    
    insertAtPosition(head, tail, 1, 9);
    printLL(head);

    insertAtPosition(head, tail, 6, 23);
    printLL(head);

    deleteNode(head, 4);
    printLL(head);

}