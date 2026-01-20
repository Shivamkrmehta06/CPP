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

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

Node* middleofLL(Node* head){
    int len = getLength(head);
    int ans = (len/2)+1;
    int count = 1;
    Node* temp = head;
    while(count<ans){
        count++;
        temp = temp->next;
    }
    return temp;
}

Node* middleOfLL2(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    if(head->next->next == NULL){
        return head->next;
    } 
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;
    } 
    return slow;
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
    Node* n = new Node(12);
    Node* head = n;
    Node* tail = n;
    insertAtTail(tail,14);
    insertAtTail(tail,16);
    //insertAtTail(tail,18);

    print(head);

    //insertAtMiddle(head,tail,5,15);
    print(head); 
    int len = getLength(head);
    cout<<"Length: "<<len<<endl;
    Node* res = middleofLL(head);
    cout<<"Middle: "<<res->data<<endl;
    Node* rez = middleOfLL2(head);
    cout<<"Middle: "<<rez->data<<endl;
    return 0;
}
