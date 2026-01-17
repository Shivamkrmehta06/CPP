//remove nth node from the end of list
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
};

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

Node* reverseList(Node* &head){
    if(head == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* fwd = NULL;\
    while(curr!=NULL){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void removeNode(Node* &head,int position){
    if(head == NULL){
        return;
    }
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int count = 1;
    Node* temp = head;
    while(count<position-1){
        temp = temp->next;
        count++;
    }
    Node* noD = temp->next;
    temp->next = noD->next;
    noD->next = NULL;
    delete noD;
}

int main() {
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;

    insertAtTail(tail,2);
    insertAtTail(tail,3);
    //insertAtTail(tail,40);

    print(head);

    reverseList(head);

    print(tail);
    
    removeNode(tail,1);
    print(tail);
    reverseList(n1);
    return 0;
}
