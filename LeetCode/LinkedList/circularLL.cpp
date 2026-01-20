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


void insert(Node* &tail,int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode; 
        newNode->next = newNode;
        return;
    }

    Node* temp = new Node(data);
    temp->next = tail->next;
    tail->next = temp;
    tail = temp;
}

void print(Node* tail){
     if(tail == NULL) return;

    Node* head = tail->next;
    Node* temp = head;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* prev = tail;
    Node* curr = tail->next;
    while(curr->data != value){
        prev = curr;
        curr = curr->next;

        if(curr == tail->next){  // completed full cycle
            cout << "Value not found" << endl;
            return;
        }
    }

    // CASE 1: Only ONE node
    if(curr == prev){
        tail = NULL;
    }
    else{
        prev->next = curr->next;
        curr->next = NULL;
        // CASE 2: deleting tail 
        if(curr == tail){
            tail = prev;
        }
    }

    delete curr;
}

int main() {
    Node* tail= new Node(10);
    tail->next = tail;
    cout<<tail<<endl<<tail->next<<endl;

    insert(tail,20);
    insert(tail,30);
    insert(tail,40);
    cout<<tail->next->next->next->data<<endl;

    print(tail);

    deleteNode(tail,20);
    print(tail);
    return 0;
}
