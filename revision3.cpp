// // Linked List(Singly)
// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
//     ~Node(){
//         int value = this->data;
//         while(this->next != NULL){
//             delete next;
//             this->next = NULL;
//         }
//         cout<<"Memory is free for node with data "<<value<<endl;
//     }
// };

// void insertAtHead(Node* &head,int data){
//     Node* temp = new Node(data);
//     temp->next = head;
//     head = temp;    
// }

// void insertAtTail(Node* &tail,int data){
//     Node* temp = new Node(data);
//     tail->next = temp;
//     tail = temp;    
// }

// void insertAtMiddle(Node* &head,int position,int data){
//     if(head == NULL){
//         Node* temp = new Node(data);
//         head->next = temp;
//         head = temp;
//         return;
//     }
//     int count = 1;
//     Node* temp = head;
//     while(count < position-1){
//         temp = temp->next;
//         count++;
//     }
//     //cout<<temp->data;
//     Node* noI = new Node(data);
//     noI->next = temp->next;
//     temp->next = noI;
// }

// void deleteNode(Node* &head,int position){
//     if(head == NULL){
//         cout<<"List is Empty"<<endl;
//         return;
//     }
//     if(position == 1){
//         Node* temp = head;
//         head = temp->next;
//         temp->next = NULL;
//         delete temp;
//     }
//     else{
//         int count = 1;
//         Node* temp = head;
//         while(count < position-1){
//             temp = temp->next;
//             count++;
//         }        
//         cout<<temp->data<<endl;
//         Node* noD = temp->next;
//         temp->next = noD->next;
//         noD->next = NULL;
//         delete noD;
        
//     }
// }

// void display(Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main() {
//     Node* n = new Node(10);
//     cout<<n->data<<endl<<n->next<<endl;
//     Node* head = n;
//     Node* tail = n;

//     // insertAtHead(head,20);
//     // insertAtHead(head,30);
//     // insertAtHead(head,40);
//     // insertAtHead(head,50);
//     // cout<<head->next->data<<endl;
//     // display(head);
    
//     insertAtTail(tail,20);
//     insertAtTail(tail,30);
//     insertAtTail(tail,40);
//     insertAtTail(tail,50);
//     display(head);
//     insertAtMiddle(head,6,60);
//     display(head);

//     deleteNode(head,4);

//     display(head);

//     deleteNode(head,1);

//     display(head);
    
//     return 0;
// }

// Circular Linked List
/*
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
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
        return;                  
    }
    Node* temp = new Node(data);
    temp->next = tail->next;
    tail->next = temp;
    tail = temp;
}

void display(Node* tail){
    if(tail == NULL)
        return;
    Node* head = tail->next;
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
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
    Node* tail = NULL;
    insert(tail,20);
    insert(tail,30);
    insert(tail,40);
    display(tail);
    return 0;
}
    */

/* #include <iostream>
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
        Node* temp = new Node(data);
        tail = temp;
        temp->next = temp;
        return;
    }
    Node* temp = new Node(data);
    temp->next = tail->next;
    tail->next = temp;
    tail = temp;
}

void display(Node* tail){
    if(tail == NULL)
        return;
    Node* head = tail->next;
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(head!=temp);
}

int main() {
    Node* tail = NULL;
    insert(tail,10);
    insert(tail,20);
    insert(tail,30);
    insert(tail,40);
    display(tail);
    return 0;
}
 */

#include <iostream>
using namespace std;

int reverseNum(int n){
    int rev = 0;
    while(n!=0){
        int rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }
    return rev;
}

void verifyNum(int num){
    for(int i = 0;i<num;i++){
        int sum = i + reverseNum(i);
        if(sum == num){
            cout<<i<<" "<<reverseNum(i)<<endl;
        }
    }
}

void func(int num){
    int init = num/2;
    for(int i = init;i<num;i++){
        int fix = i;
        int left = fix+1;
        int sum = fix+left;
        if(sum == num)
            cout<<fix<<" "<<left<<endl;
        else return;
        
    }
}

 int main() {
    int target = 443;
    //func(target);
    //reverseNum(target);
    verifyNum(target);
    return 0;
 }
 