#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory with data "<<value<<" is deleted"<<endl;
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

void insertAtMiddle(Node* &head,Node* &tail,int position,int data){
    if(position == 1){
        insertAtHead(head,data);
        return;
    }
    Node* temp = head;
    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }
    int count = 1;
    Node* temp2 = head;
    while(count<position-1){
        count++;
        temp2 = temp2->next;
    }
    Node* noI = new Node(data);
    noI->next = temp2->next;
    temp2->next = noI;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* kReverse(Node* head,int k){
    if(head == NULL){ 
        return NULL;
    }
    Node* fwd = NULL;
    Node* current = head;
    Node* prev = NULL;
    int count = 0;
    while(current != NULL && count<k){
        fwd = current->next;
        current->next = prev;
        prev = current;
        current = fwd;
        count++;
    }
    if(fwd != NULL){
        head->next = kReverse(fwd,k);
    }
    return prev;
}

int main() {
    Node* n = new Node(12);
    Node* head = n;
    Node* tail = n;
    insertAtTail(tail,14);
    insertAtTail(tail,16);
    insertAtTail(tail,18);

    print(head);

    insertAtMiddle(head,tail,5,15);
    print(head);
    Node* res = kReverse(head,3);
    print(res); 
    return 0;
}
