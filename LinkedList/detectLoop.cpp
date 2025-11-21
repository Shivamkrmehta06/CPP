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

bool detectLoop(Node* &head){
    Node* temp = head;
    if(temp == NULL){
        return false;
    }
    map<Node*,bool> visited;
    while(temp!=NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
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

    if(detectLoop(tail)) cout<<"Loop is present"<<endl;

    return 0;
}
