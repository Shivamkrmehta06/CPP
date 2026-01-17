/* 
List = 1 -> 2 -> 3 -> 4 -> 5
rotate 1 = 5 -> 1 -> 2 -> 3 -> 4
rotate 2 = 4 -> 5 -> 1 -> 2 -> 3
*/

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

Node* rotate(Node* &head){
    if(head == NULL || head->next == NULL ){
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    temp->next = head;
    prev->next = NULL;
    head = temp;      
    return temp;
}


Node* rotateK(Node* &head,int k){
    if(head == NULL || head->next == NULL || k ==0){
        return head;
    }
    head = rotate(head);
    return rotateK(head,k-1);
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
    //Node* ans = rotate(head);
    display(head);

    Node* res = rotateK(head,3);
    display(res);
    return 0;
}
