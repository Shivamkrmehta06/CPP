#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        //memory free
        //yeh recursive if condition bnata and ek bar me pura link tod skta
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
    tail->next = temp;
    tail = temp;
}

void deleteNode(int position,Node* &head){
    //delete starting node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //delete middle or last node
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void insertAtMiddle(Node* &head,int position, int data){
    Node* temp = head;
    
    //first me insert krne ke liye
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    //last me insertion v ho gya
    if(temp->next == NULL){
        insertAtTail(head,data);
        return;
    }

    int count = 1;
    while(count<position-1){
        temp = temp->next;
        count++;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;
    cout<<n1->data<<endl<<n1->next<<endl;
    
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);

    insertAtMiddle(head,1,5);
    insertAtMiddle(head,3,25);
    insertAtMiddle(head,8,60);

    //deleteNode(1,head);
    // deleteNode(3,head);
    // deleteNode(6,head);

    print(head);

};