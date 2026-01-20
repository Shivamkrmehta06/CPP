// #include <iostream>
// using namespace std;

// bool linearSearch(int *arr,int size,int key){
//     for(int i = 0;i<size;i++){
//         if(arr[i] == key){
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     if(linearSearch(arr,5,2)){
//         printf("Element Found!");
//     }
//     else{
//         printf("Element not Found!");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<ctype.h>
// #include<stdlib.h>
// void merge(int *arr1,int *arr2,int size1,int size2){
//     int len1 = size1;
//     int len2 = size2;
//     int resLen = len1+len2;
//     int *resArr = (int*)malloc(resLen*sizeof(int));
//     int index1 = 0;
//     int index2 = 0;
//     int maI = 0;
//     while(index1<len1 && index2<len2){
//         if(arr1[index1]<arr2[index2]){
//             resArr[maI++] = arr1[index1++];
//         }
//         else{
//             resArr[maI++] = arr2[index2++];
//         }
//     }

//     while(index1<len1){
//         resArr[maI++] = arr1[index1++];
//     }

//     while(index2<len2){
//         resArr[maI++] = arr2[index2++];
//     }

//     for(int i = 0;i<resLen;i++){
//         printf("%d ",resArr[i]);
//     }
    
// }

// int main(){
//     int *arr = (int*)malloc(5*sizeof(int));
//     int *arr2 = (int*)malloc(3*sizeof(int));
//     for(int i = 0;i<5;i++){
//         arr[i] = 1;
//     }
//     for(int i = 0;i<3;i++){
//         arr2[i] = i*3;
//     }
    
//     merge(arr,arr2,5,3);
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// typedef struct Node{
//     int data;
//     struct Node* next;
// }Node;

// Node* initialize(int data){
//     Node* n1 = (Node*)malloc(sizeof(Node));
//     n1->data = data;
//     n1->next = NULL;
//     return n1;
// }

// void insertAtHead(Node** head,int data){
//     Node* temp = (Node*)malloc(sizeof(Node));
//     temp->data = data;
//     temp->next = *head;
//     *head = temp;
// }

// void insertAtTail(Node** tail,int data){
//     Node* temp = (Node*)malloc(sizeof(Node));
//     temp->data = data;
//     temp->next = NULL;
//     (*tail)->next = temp;
//     *tail = temp;
// }

// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp = temp->next;
//     }
// }

// int main(){
//     Node* mohit = initialize(10);
//     Node* tail = mohit;
//     Node* head = mohit;

//     insertAtHead(&head,5);
//     insertAtTail(&tail,20);
//     insertAtTail(&tail,30);
//     insertAtTail(&tail,40);

//     //printf("%d ",tail->next->data);
//     display(head);
// } 

// #include<stdio.h>
// #include<stdlib.h>

// int* initialise(int size){
//     int *arr = (int*)malloc(size*sizeof(int));
//     for(int i = 0;i<size;i++){
//         printf("Enter a Value: ");
//         scanf("%d",&arr[i]);
//     }
//     return arr;
// }

// void display(int *arr,int size){
//     for(int i = 0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
// }

// void binarySearch(int* arr,int size,int key){
//     int start = 0;
//     int end = size-1;
//     int mid = start+(end-start)/2;
//     while(start<end){
//         if(arr[mid] == key){
//             printf("\n%d is found at index %d\n",arr[mid],mid);
//             return;
//         }
//         else if(arr[mid]<key){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//         mid = start+(end-start)/2;
//     }
// }

// //bubble sort
// void bubbleSort(int *arr,int size){
//     for(int i = 0;i<size;i++){
//         for(int j = i+1;j<size;j++){
//             if(arr[i]>arr[j]){
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for(int i = 0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
// }

// //deletion of an element -> shifting the elements towards left
// void deleteEle(int *arr,int position,int size){
//     for(int i = position - 1;i<size-1;i++){
//         arr[i] = arr[i+1];
//     }
//     size--;
//     for(int i = 0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
// }

// int main(){
//     //int *arr = initialise(5);
//     //display(arr,5);
//     //bubbleSort(arr,5);
//     //binarySearch(arr,5,3);
    
//     int arr[5] = {1,2,3,4,5};
//     deleteEle(arr,4,5);
//     return 0;
// }

//check number of vowels and consonants
// #include<stdio.h>

// char lowUp(char ch){
//     if(ch>=65 && ch<=90){
//         ch = ch - 'A' + 'a';
//     }
//     return ch;
// }

// void countVow(char* arr,int size){
//     int count = 0;
//     for(int i = 0;i<size;i++){
//         char ch = lowUp(arr[i]);
//         printf("%c ",ch);
//         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
//             count++;
//         }
//     }
//     int cons = 26 - count;
//     printf("Number of vowels: %d\n",count);
//     printf("Number of consonants: %d\n",cons);
// }

// int main(){
//     char arr[] = "Shivam";
//     countVow(arr,6);
//     return 0;
// }

// implementation of stack
// #include<stdio.h>
// #include<stdlib.h>

// typedef struct Stack{
//     int *arr;
//     int size;
//     int top;
// }Stack;

// Stack* initialize(int size){
//     Stack* s = (Stack*)malloc(sizeof(Stack));
//     s->size = size;
//     s->top = -1;
//     s->arr = (int*)malloc(size*sizeof(int));
//     return s;
// }

// void push(Stack** s,int data){
//     if((*s)->size - (*s)->top > 1){
//         (*s)->top++;
//         (*s)->arr[(*s)->top] = data;
//     }
//     else{
//         printf("Stack Overflow\n");
//     }
// }

// void pop(Stack** s){
//     if((*s)->top >= 0){
//         (*s)->top--;
//     }
//     else{
//         printf("Stack Undeflow\n");
//     }
// }

// int peek(Stack** s){
//     if((*s)->top >= 0){
//         return (*s)->arr[(*s)->top];
//     }
//     printf("Stack is empty\n");
//     return -1;
// }

// bool isEmpty(Stack** s){
//     if((*s)->top == -1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// void display(Stack *s){
//     if(s->top == -1){
//         printf("Stack is Empty\n");
//     }

//     for(int i = s->top;i>=0;i--){
//         printf("%d ",s->arr[i]);
//     }
//     printf("\n");
// }

// int main(){
//     Stack *s1 = initialize(5);
//     push(&s1,10);
//     push(&s1,20);
//     push(&s1,30);
//     push(&s1,40);
//     push(&s1,50);
//     display(s1);

//     int top = peek(&s1);
//     printf("Peek Element: %d\n",top);

//     pop(&s1);
//     pop(&s1);
//     pop(&s1);
//     pop(&s1);
//     pop(&s1);
//     display(s1);
//     pop(&s1);
//     if(isEmpty(&s1)) printf("Stack is Empty\n");
//     else printf("Stack is not Empty\n");
// }

// // Tower of Hanoi
// #include<stdio.h>
 
// void towerOfHanoi(int n,char source,char auxilary,char destination){
//     if(n == 1){
//         printf("Disk%d is moved from %c to %c\n",n,source,destination);
//         return;
//     }
//     towerOfHanoi(n-1,source,destination,auxilary);
//     printf("Disk%d is moved from %c to %c\n",n,source,destination);
//     towerOfHanoi(n-1,auxilary,source,destination);
// }

// int main(){
//     int n = 3;
//     towerOfHanoi(n,'A','B','C');
//     return 0;
// }

//implementation of queue
// #include<stdio.h>
// #include<stdlib.h>
// #include<stdbool.h>

// typedef struct Queue{
//     int *arr;
//     int front;
//     int rear;
//     int size;
// }Queue;

// Queue* initialize(int size){
//     Queue* s = (Queue*)malloc(sizeof(Queue));
//     s->size = size;
//     s->arr = (int*)malloc(size*sizeof(int));
//     s->front = 0;
//     s->rear = 0;
//     return s;
// }

// bool isEmpty(Queue** s){
//     if((*s)->front == (*s)->rear){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// void enqueue(Queue** s,int data){
//     if((*s)->rear == (*s)->size){
//         printf("Queue is Full\n");
//     }
//     else{
//         (*s)->arr[(*s)->rear] = data;
//         (*s)->rear++;
//     }
// }

// int dequeue(Queue** s){
//     if((*s)->front == (*s)->rear){
//         return -1;
//     }
//     else{
//         int ans = (*s)->arr[(*s)->front];
//         (*s)->arr[(*s)->front] = -1;
//         (*s)->front++;
//         if((*s)->front == (*s)->rear){
//             (*s)->front = 0;
//             (*s)->rear = 0;
//         }
//         return ans;
//     }
// }

// int getFront(Queue** s){
//     if((*s)->front == (*s)->rear){
//         return -1;
//     }
//     else{
//         return (*s)->arr[(*s)->front];
//     }
// }

// int getRear(Queue** s){
//     if((*s)->rear > (*s)->size){
//         printf("Queue Overflow\n");
//         return -1;
//     }
//     else{
//         return (*s)->arr[(*s)->rear-1];
//     }
// }

// bool isFull(Queue** s){
//     if((*s)->rear == (*s)->size){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// void display(Queue* s){
//     if(s->rear ==  s->front){
//         printf("Queue is Empty\n");
//         return;
//     }
//     for(int i = s->front;i< s->rear;i++){
//         printf("%d ",s->arr[i]);
//     }
//     printf("\n");
// }

// int main(){
//     Queue* q = initialize(5);
//     enqueue(&q,10);
//     enqueue(&q,20);
//     enqueue(&q,30);
//     enqueue(&q,40);
//     display(q);
//     return 0;
// }

//Implementation of Circular Queue

// #include<stdio.h>
// #include<stdlib.h>
// #include<stdbool.h>

// typedef struct circularQueue{
//     int *arr;
//     int front;
//     int rear;
//     int size;
// }circularQueue;

// circularQueue* initialize(int size){
//     circularQueue* q = (circularQueue*)malloc(sizeof(circularQueue));
//     q->size = size;
//     q->front = -1;
//     q->rear = -1;
//     q->arr = (int*)malloc(size * sizeof(int));
//     return q;
// }

// bool isFull(circularQueue* q){
//     return (q->rear + 1) % q->size == q->front;
// }

// bool isEmpty(circularQueue* q){
//     return q->front == -1;
// }

// void enqueue(circularQueue** q, int value){
//     if(isFull(*q)){
//         printf("Queue is Full\n");
//         return;
//     }

//     if((*q)->front == -1){   // first element
//         (*q)->front = 0;
//         (*q)->rear = 0;
//     }
//     else{
//         (*q)->rear = ((*q)->rear + 1) % (*q)->size;
//     }

//     (*q)->arr[(*q)->rear] = value;
// }

// int dequeue(circularQueue** q){
//     if(isEmpty(*q)){
//         printf("Queue is Empty\n");
//         return -1;
//     }

//     int data = (*q)->arr[(*q)->front];

//     if((*q)->front == (*q)->rear){   // last element
//         (*q)->front = -1;
//         (*q)->rear = -1;
//     }
//     else{
//         (*q)->front = ((*q)->front + 1) % (*q)->size;
//     }

//     return data;
// }

// void display(circularQueue* q){
//     if(isEmpty(q)){
//         printf("Queue is Empty\n");
//         return;
//     }

//     int i = q->front;
//     while(1){
//         printf("%d ", q->arr[i]);
//         if(i == q->rear) break;
//         i = (i + 1) % q->size;
//     }
//     printf("\n");
// }

// int main(){
//     circularQueue* q = initialize(3);

//     enqueue(&q, 10);
//     enqueue(&q, 20);
//     enqueue(&q, 30);   // full after this

//     display(q);

//     dequeue(&q);
//     enqueue(&q, 40);   // circular nature

//     display(q);

//     return 0;
// }

//Singly linked list 

// #include<stdio.h>
// #include<stdlib.h>

// typedef struct Node{
//     int data;
//     struct Node* next;
// }Node;

// Node* initialize(int data){
//     Node* temp = (Node*)malloc(sizeof(Node));
//     temp->data = data;
//     temp->next = NULL;
//     return temp;
// }

// void insertAtHead(Node** head,int data){
//     Node* temp = (Node*)malloc(sizeof(Node));
//     temp->data = data;
//     temp->next = (*head);
//     (*head) = temp;
// }

// void insertAtTail(Node** tail,int data){
//     Node* temp = (Node*)malloc(sizeof(Node));
//     temp->data= data;
//     (*tail)->next = temp;
//     (*tail) = temp;
// }

// void deleteNode(Node** head,Node** tail,int position){
//     if((*head) == NULL){
//         printf("List is Empty\n");
//         return;
//     }
//     if(position == 1){
//         Node* temp = (*head);
//         (*head) = temp->next;
//         temp->next = NULL;
//         free(temp);
//     }
//     Node* temp = (*head);
//     for(int i = 1;i<position-1;i++){
//         temp = temp->next;
//     }
//     printf("%d\n",temp->data);
//     Node* noD = temp->next;
//     printf("%d\n",noD->data);
//     temp->next = noD->next;
//     noD->next = NULL;
//     free(noD);
// }

// int searchList(Node** head,int value){
//     if((*head)==NULL){
//         return -1;
//     }
//     Node* temp = (*head);
//     int count = 1;
//     while(temp!=NULL){
//         if(temp->data == value){
//             return count;
//         }
//         temp = temp->next;
//         count++;
//     }
//     return -1;
// }

// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         printf("%d ",temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main(){
//     Node* n1 = initialize(10);
//     Node* head = n1;
//     Node* tail = n1;
//     insertAtTail(&tail,20);
//     insertAtTail(&tail,30);
//     insertAtTail(&tail,40);

//     display(head);
//     //deleteNode(&head,&tail,3);
//     //display(head);

//     int a = searchList(&head,10);
//     printf("Element is found at index %d\n",a);
//     return 0;
// }

//Circular Linked List
// #include<stdio.h>
// #include<stdlib.h>

// typedef struct Node{
//     int data;
//     struct Node* next;
// }Node;

// Node* initialize(int data){
//     Node* temp = (Node*)malloc(sizeof(Node));
//     temp->data = data;
//     temp->next = temp;
//     return temp;
// }

// void insert(Node** tail,int data){
//     Node* temp = (Node*)malloc(sizeof(Node));
//     temp->data = data;
//     temp->next = (*tail)->next;
//     (*tail)->next = temp;
//     (*tail) = temp;
// }

// void display(Node* tail){
//     if(tail == NULL){
//         printf("List is empty\n");
//         return;
//     }
//     Node* head = tail->next;
//     Node* temp = head;
//     do{
//         printf("%d ",temp->data);
//         temp = temp->next;
//     }while(temp!=head);

// }

// int main(){
//     Node* n1 = initialize(10);
//     Node* tail = n1;
//     insert(&tail,20);
//     insert(&tail,30);
//     insert(&tail,40);

//     display(tail);
//     return 0;
// }

// Binary Search Tree implementation using Linked List
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

Node* initialize(int data){
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

Node* insert(Node* root,int data){
    if((root)==NULL){
        return initialize(data);
    }

    if(data < (root)->data){
        (root)->left = insert((root)->left,data);
    }
    else if(data > (root)->data){
        (root)->right = insert(root->right,data);
    }
    return root;
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

int main(){
    Node* root = NULL;

    root = insert(root,10);
    insert(root,20);
    insert(root,30);
    insert(root,40);
    insert(root,50);
    insert(root,60);

    inorder(root);
}