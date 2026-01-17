#include <iostream>
#include<map>
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

bool detectCycle(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*,bool> visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

bool floydCycleDetect(Node* head){
    if(head == NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL || slow != NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
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
    bool ans = detectCycle(head);
    tail->next = head;
    ans==true?cout<<"Cycle Absent"<<endl:cout<<"Cycle Present"<<endl;
    bool res = floydCycleDetect(head);
    res==true?cout<<"Cycle Present"<<endl:cout<<"Cycle Absent"<<endl;
    return 0;
}
