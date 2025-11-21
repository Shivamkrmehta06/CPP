//Floyd Cycle Detect Algo - Initialize two pointers - slow and fast and then fast will move to steps while slow will move only one step and when they meet at a point then the list has loop

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

Node* floydAlgo(Node* &head){
    if(head == NULL)
        return NULL;
    Node* slow = head;
    Node* fast = head;
    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            return slow;
        }
    }
    return NULL;

}

Node* beginningOfLoop(Node* &head){
    Node* slow = head;
    Node* intersection = floydAlgo(head);
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* &head){
    if(head == NULL)
        return;
    Node* begLoop = beginningOfLoop(head);
    Node* temp = begLoop;
    while(temp->next!=begLoop){
        temp = temp->next;
    }
    temp->next = NULL;
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
    insertAtTail(tail,40);
    print(head);

    tail->next = head->next;

    removeLoop(head);

    if(floydAlgo(head)!=NULL) cout<<"Loop is present"<<endl;
    else cout<<"Loop is not present"<<endl;

    Node* ans = beginningOfLoop(head);
    cout<<"Loop begins at "<<ans->data<<endl;
    return 0;
}
