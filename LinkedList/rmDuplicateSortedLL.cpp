#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

   /*  ~Node(){
        int value = this->data;
        //memory free
        //yeh recursive if condition bnata and ek bar me pura link tod skta
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }  */   
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

Node* removeDuplicates(Node* &head){
    if(head == NULL)
        return NULL;
    Node* curr = head;
    while(curr != NULL){
        if(curr->next != NULL && curr->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,40);
    insertAtTail(tail,40);

    print(head);

    Node* ans = removeDuplicates(head);
    print(ans);

    return 0;
}
