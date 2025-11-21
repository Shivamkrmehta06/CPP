#include <iostream>
#include<map>
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

void print(Node* &tail){
    if(tail == NULL) return;
    Node* temp = tail->next;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=tail->next);
    cout<<endl;
    
}

void verifyCLL(Node* &tail){
    Node* temp = tail->next;
    while(temp!=NULL && temp != tail){
        temp = temp->next;
    }
    if(temp == NULL) cout<<"It's not Circular Linked List"<<endl;
    if(temp == tail) cout<<"It's circular linked list"<<endl;
}

bool checkCLL(Node* &tail){
    map<Node*,bool> m4;
    if(tail == NULL) return true;
    Node* head = tail->next;
    Node* temp = head;
    while(temp != NULL){
        //if we encounter a node which is visited before
        if(m4[temp] == true){
            //if the nnode we hit is head, the circle is complete & valid
            if(temp == head){
                return true;
            }
            else{
                return false;
            }
        }
        m4[temp] = true;
        temp = temp->next;
    } 
    return false;
}

int main() {
    Node* tail = NULL;
    insert(tail,20);
    insert(tail,30);
    insert(tail,40);

    print(tail);
    verifyCLL(tail);
    if(checkCLL(tail)) cout<<"Linked List is Circular"<<endl;
    return 0;
}
