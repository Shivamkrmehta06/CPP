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

Node* reverseK(Node* &head, int k){
    if(head == NULL)
        return head;
    
    Node* temp = head;
    for(int i = 0;i<k;i++){
        if(temp == NULL) return head;
        temp = temp->next;

        //temp = (temp == NULL)?temp:temp->next;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* fwd = NULL;
    int count = 0;
    while(curr != NULL && count < k){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
        count++;
    }

    if(fwd != NULL){
        head->next = reverseK(fwd,k);
    }
    return prev;
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

    Node* ans = reverseK(head,3);
    display(ans);

    return 0;
}
