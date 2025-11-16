#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

//is function me bas ek tail argument dalne se output me tail update ho gya!!
void insertAtMiddle(Node* &head,Node* &tail,int data,int position){
    Node* temp = head;
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
       int count = 1;
    while(count<position-1 && temp->next!=NULL){
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
}

void deleteNode(Node* &head,int position){
    if (position == 1) {
        Node* temp = head;
        head = temp->next;

        head->prev = NULL;

        temp->next = NULL;
        delete temp;
        return;
    }
    int count = 1;
    Node* prev = NULL;
    Node* curr = head;

    while(count<position){
        prev = curr;
        curr = curr->next;
        count++;
    }
    prev->next = curr->next;
    curr->next->prev = prev;
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* n1 = new Node(10);
    cout<<n1->data<<endl;
    cout<<n1->prev<<endl;
    cout<<n1->next<<endl;

    Node* head = n1;
    Node* tail = n1;

    insertAtHead(head,20);
    insertAtTail(tail,30);
    insertAtMiddle(head,tail,25,4);

    deleteNode(head,1);
    deleteNode(head,2);

    print(head);
    cout<<endl<<endl;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    return 0;
}