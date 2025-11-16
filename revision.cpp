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
        cout<<value<<" is deleted from the node"<<endl;
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

void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtMiddle(Node* &head,int position,int data){
    if(position == 1){
        insertAtHead(head,data);
        return;
    }

    Node* temp = head;
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

void deleteNode(Node* &head,int position){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else{
        int count = 1;
        Node* current = head;
        Node* prev = NULL;

        while(count<position){
            prev = current;
            current = current->next;
            count++;
        }

        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

//Reverse Linked List
void reverseLLR(Node* &head,Node* prev,Node* curr){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* fwd = curr->next;
    reverseLLR(head,curr,fwd);
    curr->next = prev;
}

void reverseLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    // while(curr!=NULL){
    //     Node* fwd = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = fwd;
    // }
    // head = prev;
    reverseLLR(head,prev,curr);
}

Node* reverseLLR2(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* chotaHead = reverseLLR2(head->next);
    head->next->next = head;
    head->next = NULL;
    return chotaHead;

}

void middleOFLL(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp!=NULL){
        length++;
        temp = temp->next;
        
    }
    cout<<"Length of Linked List: "<<length<<endl;
}
int main() {
    Node* n = new Node(10);
    Node* head = n;
    Node* tail = n;

    insertAtTail(head,20);
    insertAtTail(head,30);
    cout<<head->data<<endl<<n->next<<endl;
    display(tail);

    // insertAtMiddle(tail,2,15);
    // insertAtMiddle(tail,4,25);
    // display(tail);

    // deleteNode(tail,1);
    // deleteNode(tail,2);
    // display(tail);

    // reverseLL(tail);
    // display(tail);

    // Node* res = reverseLLR2(head);
    // display(res);
    middleOFLL(tail);
    return 0;
}
 





