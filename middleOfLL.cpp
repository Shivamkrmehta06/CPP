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
        cout<<"Memory is free for Node with data"<<value<<endl;
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

void insertAtMiddle(Node* &head,Node* &tail,int position, int data){
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

void deleteNode(Node* &head,int position){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* temp = head;
        int count = 1;

        while(count<position){
            prev = temp;
            temp = temp->next;
            count++;
        }
        prev->next = temp->next;
        temp->next = NULL;
        delete temp;                   
    }
}

Node* getNode(Node* head,int position){
    Node* temp = head;
    int count = 1;
    while(count < position && temp != NULL){
        temp = temp->next;
        count++;
    }
    return temp;
}

Node* middleOfNode(Node* &head){
    Node* temp = head;
    int count = 1;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    int middle = (count/2);
    Node* res = getNode(head,middle);
    return res;
}

void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);

    print(head);
    cout<<endl<<endl;
    
    Node* res = middleOfNode(head);
    cout<<"Middle Node: "<<res->data<<endl;

    return 0;
}
