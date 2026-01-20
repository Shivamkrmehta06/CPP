#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->next = NULL;
        this->data = data;
    }
};

void insert(Node* &head,int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        return;
    }
    Node* temp = new Node(data);
    head->next = temp;
    head = temp;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

Node* detectCycleFloyd(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && slow != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

Node* detectCycle(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = detectCycleFloyd(head);
    Node* slow = head;
    while(slow != intersection){
        slow = slow->next;
        if(intersection == NULL){
            return NULL;
        }
        intersection = intersection->next;
    }
    return slow;
}

int main() {
    Node* tail = NULL;
    insert(tail,10);
    Node* head = tail;
    insert(tail,20);
    insert(tail,30);
    insert(tail,40);
    insert(tail,50);
    display(head);

    Node* ans = detectCycleFloyd(head);
    cout<<ans->data<<endl;

    
    return 0;
}
