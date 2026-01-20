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

Node* solve(Node* &first,Node* &second){
    Node* curr1 = first;
    Node* next1 = curr1->next;

    Node* curr2 = second;
    Node* next2 = curr2->next;

    while(next1 != NULL && curr2 != NULL){
        if(curr2->data >= curr1->data && curr2->data <= next1->data){
            next2 = curr2->next;     // store original next first

            curr1->next = curr2;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;    
        }
        else{
            curr1 = next1;
            next1 = next1->next;
            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node* mergeList(Node* &first,Node* &second){
    if(first == NULL)
        return second;

    if(second == NULL)
        return first;
    
    if(first->data <= second->data){
        return solve(first,second);
    }
    else{
        return solve(second,first);
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node* n1 = new Node(10);
    Node* head1 = n1;
    Node* tail1 = n1;
    // insertAtTail(tail1,20);
    // insertAtTail(tail1,30);
    // insertAtTail(tail1,40);

    Node* n2 = new Node(15);
    Node* head2 = n2;
    Node* tail2 = n2;
    // insertAtTail(tail2,25);
    // insertAtTail(tail2,35);
    // insertAtTail(tail2,45);
    
    print(head1);
    print(head2);

    Node* con = mergeList(head1,head2);
    print(con);
    
    return 0;
}
