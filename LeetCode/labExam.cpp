// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// struct Student{
//     int stu_id;
//     char name[100];
//     char grade;
//     float marks[5];
//     float avgMarks;
// };

// float average(struct Student *s){
//     float avg = 0;
//     for(int i = 0;i<5;i++){
//         avg += s->marks[i];
//     }
//     s->avgMarks = avg/5;
//     return s->avgMarks;
// }

// char grades(struct Student *s){
//     if(s->avgMarks >= 90){
//         return s->grade = 'A';
//     }

//     else if(s->avgMarks >= 80){
//         return s->grade = 'B';
//     }

//     else if(s->avgMarks >= 70){
//         return s->grade = 'C';
//     }
    
//     else if(s->avgMarks >= 60){
//         return s->grade = 'D';
//     }

//     else if(s->avgMarks >= 50){
//         return s->grade = 'E';
//     }

//     else{
//         return s->grade = 'F';
//     }

// }

// void input(struct Student *s,int size){
//     for(int i = 0;i<size;i++){
//         struct Student *p = s + i;
//         printf("Enter your name: ");
//         scanf("%s",p->name);
//         getchar();
//         printf("Enter Student ID: ");
//         scanf("%d",&p->stu_id);

//         for(int j = 0;j<5;j++){
//             printf("Enter your Marks: ");
//             scanf("%f",&p->marks[j]);
//         }
//     }
// }

// void output(struct Student *s,int size){
//     for(int i = 0;i<size;i++){
//         struct Student *p = s+i;

//         printf("Name: %s\n",p->name);
//         printf("ID: %d\n",p->stu_id);
//         printf("Average Marks: %f\n",average(p));
//         printf("Grade: %c\n",grades(p));
//     }
// }

// int main(){
//     struct Student s1[3];
//     input(s1,3);
//     output(s1,3);
//     return 0;
// }

//Create a stack data structure using linked list
// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };

// struct Stack{
//     struct Node* top;
// };

// struct Stack *createStack(){
//     struct Stack *newStack = (struct Stack*)malloc(sizeof(struct Stack));
//     newStack->top = NULL;
//     return newStack;
// }

// int isEmpty(struct Stack *s){
//     return (s->top == NULL);
// }

// void push(struct Stack *s,int data){
//     struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = s->top;
//     s->top = newNode;
//     printf("%d Element is pushed into stack\n",newNode->data);
// }

// int pop(struct Stack *stack){
//     if(isEmpty(stack)){
//         printf("Stack is empty, can't pop\n");
//         return -1;
//     }

//     struct Node* temp = stack->top;
//     int poppedData = temp->data;
//     stack->top = temp->next;
//     free(temp);
//     return poppedData;
// }

// int main(){
//     struct Stack *s1 = createStack();
//     push(s1,10);
//     push(s1,20);
//     push(s1,30);

//     printf("%d Element is popped from stack\n",pop(s1));
//     printf("%d Element is popped from stack\n",pop(s1));
//     printf("%d Element is popped from stack\n",pop(s1));
//     printf("%d Element is popped from stack\n",pop(s1));
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// #define Max_URL_Length 100
// typedef struct Node{
//     char url[Max_URL_Length];
//     struct Node* next;
// }Node;

// typedef struct Stack{
//     struct Node* top;
// }Stack;

// void initialize(Stack *stack){
//     stack->top = NULL;
// }

// void push(Stack *stack,char *url){
//     Node *newNode = (Node*)malloc(sizeof(Node));
//     if(newNode == NULL){
//         printf("Memory Allocation Failed!\n");
//         return;
//     }
//     strncpy(newNode->url,url,Max_URL_Length);
//     newNode->next = stack->top;
//     stack->top = newNode;
// }

// void pop(Stack *stack){
//     if(stack->top == NULL){
//         printf("No more URL in History");
//         return;
//     }
//     Node* temp = stack->top;
//     stack->top = temp->next;
//     free(temp);
// }

// void display(Stack *stack){
//     if(stack->top == NULL){
//         printf("No URL loaded Currently\n");
//         return;
//     }
//     else{
//         printf("Current URL: %s",stack->top->url);
//     }
// }

// int main(){
//     Stack historyStack;
//     initialize(&historyStack);

//     int choice;
//     char url[Max_URL_Length];

//     while(1){
//         printf("\nMenu\n");
//         printf("1.Visit URL\n");
//         printf("2.Go back\n");
//         printf("3.Display Current URL\n");
//         printf("4.Exit\n");
//         printf("Enter your Choice: ");
//         scanf("%d",&choice);

//         switch(choice){
//             case 1:
//                 printf("Enter URL: ");
//                 scanf("%s",url);
//                 push(&historyStack,url);
//                 break;

//             case 2:
//                 pop(&historyStack);
//                 break;

//             case 3:
//                 display(&historyStack);
//                 break;
            
//             case 4:
//                 while(historyStack.top != NULL){
//                     pop(&historyStack);
//                 }
//                 return 0;
            
//             default:
//                 printf("Invalid Choice,try again\n");
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int linearSearch(int *arr,int size,int value){
//     for(int i = 0;i<size;i++){
//         if(arr[i] == value){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int ans = linearSearch(arr,5,0);
//     printf("Element is found at Index: %d\n",ans);
//     return 0;
// }

// Merge two sorted arrays
//{1,3,5,7,9}
//{2,4,6,8}
// #include<stdio.h>
// void merge(int *arr,int m,int *arr2,int n,int *arr3){
//     int i = 0,j = 0,k = 0;
//     while(i<m && j<n){
//         if(arr[i]<arr2[j]){
//             arr3[k++] = arr[i++];
//         }
//         else{
//             arr3[k++] = arr2[j++];
//         }
//     }
//     while(i<m){
//         arr3[k++] = arr[i++];
//     }

//     while(i<n){
//         arr3[k++] = arr2[j++];
//     }
// }

// int main(){
//     int arr[5] = {1,3,5,7,9};
//     int arr2[4] = {2,4,6,8};
//     int arr3[9] = {0};
//     merge(arr,5,arr2,4,arr3);
//     for(auto x:arr3) printf(" %d ",x);
//     return 0;
// }

// deletion of element in an array
//{1,2,3,4,5}

// #include<stdio.h>
// void deleteEle(int *arr,int *size,int value){
//     int count = 0;
//     for(int i = 0;i<*size;i++){
//         if(arr[i] == value){
//             for(int j = i;j<*size-1;j++){
//                 arr[j] = arr[j+1];
//             }
//             (*size)--;
//             i--;
//         }
//     }

// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     deleteEle(arr,&size,3);
//     for(int i = 0;i<size;i++) printf(" %d ",arr[i]);
// }

//count vowel and consonants
// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>

// void lowerCase(char *arr){
//     int i = 0;
//     while(arr[i]!='\0'){
//         if(arr[i]>='A' && arr[i]<='Z')
//             arr[i] = arr[i] - 'A'+'a';
//         i++;
//     }
// }
// void verifyVC(char *arr){
//     int i = 0;
//     int count = 0;
//     lowerCase(arr);
//     while(arr[i]!='\0'){
//         if(arr[i]=='a'||arr[i]=='i'||arr[i]=='e'||arr[i]=='o'||arr[i]=='u'){
//             count++;
//         }
//         i++;
//     }
//     printf("Number of vowels:%d\nNumber of consonants:%d\n",count,(26-count));
// }

// int main(){
//     char arr[] = "SHIVAM";
//     //lowerCase(arr);
//     printf("%s\n",arr);
//     verifyVC(arr);
// }

//bubble sort
#include<stdio.h>
void bubbleSort(int *arr,int size){
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void selectionSort(int *arr,int size){
    for(int i = 0;i<size-1;i++){
        int minIndex = i;
        for(int j = i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void insertionSort(int *arr,int size){
    for(int i = 1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[5] = {5,3,1,4,2};
    selectionSort(arr,5);
    for(int i = 0;i<5;i++) printf(" %d ",arr[i]);
}