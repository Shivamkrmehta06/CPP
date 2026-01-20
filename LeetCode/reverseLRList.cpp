
// Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

// Input: head = [1,2,3,4,5], left = 2, right = 4
// Output: [1,4,3,2,5]

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
};

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}


void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* reverseList(Node* &head,Node* &tail){
    Node* prev = NULL;
    Node* curr = head;
    Node* fwd = NULL;
    while(prev!=tail){
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}

void removeRL(Node* &head,int left,int right){
    if(head == NULL)
        return;
    Node* nHead = head;
    Node* nTail = head;
    int count = 1;
    Node* leftPrev = NULL;

    while(count<left || count<right){
        if(count < left){
            leftPrev = nHead;
            nHead = nHead->next;
        }
        if(count<right){
            nTail = nTail->next;
        }
        count++;
    }
    cout<<"Left Previous: "<<leftPrev->data<<endl;
    Node* remList = nTail->next;
    nTail->next = NULL;
    cout<<"Left: "<<nHead->data<<endl<<"Right: "<<nTail->data<<endl;
    Node* res = reverseList(nHead,nTail);
    Node* resHead = res;
    Node* resTail = res;
    while(resTail->next != NULL){
        resTail = resTail->next;
    }
    if(leftPrev!=NULL){
        leftPrev->next = resHead;
    }
    else{
        head = resHead;
    }
    resTail->next = remList;
    cout<<resHead->data<<endl<<resTail->data<<endl;
    print(head);
}


int main() {
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;

    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);

    print(head);
    removeRL(head,2,4);
    return 0;
}