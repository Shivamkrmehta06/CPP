/* //Global Variable
#include <iostream>
using namespace std;
int main(){
    int x = 10;
    printf("%d", x == 10);

    int y,i=1;
    printf("Enter a Value: ");
    scanf("%d",&x);
    goto printLabel;
    printLabel:
        printf("%d x %d : %d\n",y,i,(y*i));
        i++;
        if(i<=10)goto printLabel;
}
 */

//Declare and Print Elements
/*  
#include <stdio.h>

int sum(int arr[],int size){
    int s = 0;
    for(int i = 0;i<size;i++){
        s = s + arr[i];
    }
    return s;
}

int linearSearch(int arr[],int size,int key){
    for(int i = 0;i<size;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return 0;
}

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start +(end - start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int a = sum(arr,5);
    printf("Sum: %d\n",a);
    int b = linearSearch(arr,5,3);
    printf("Element is at Index: %d\n",b);
    int c = binarySearch(arr,5,3);
    printf("Element is at Index: %d\n",c);
    printArray(arr,5);
    return 0;
} */

//Let's play with 2D arrays

/* #include<stdio.h>

void printArray(int arr[][2],int size){
    for(int i = 0;i<size;i++){
        for(int j = 0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void inputArray(int arr[][2],int size){
    for(int row = 0;row<size;row++){
        for(int col = 0;col<2;col++){
            printf("Enter a Value for [%d][%d]:",row,col);
            scanf("%d",&arr[row][col]);
        }
    }
}

void matrixMultiplication(int arr[2][2],int arr1[2][2]){
    int c[2][2];
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            c[i][j] = 0;
            for(int k = 0;k<2;k++){
                c[i][j] += arr[i][k]*arr1[k][j];
            }
        }
    }
    printArray(c,2);
}

void matrixTranspose(int arr[2][2]){
    int arr1[2][2];
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            arr1[j][i] = arr[i][j];
        }
    }
    printArray(arr1,2);
}

int main(){
    int arr[2][2] = {{1,2},{3,4}};
    int arr1[2][2] = {{5,6},{7,8}};
    int arr2[2][2];
    for(int row = 0;row<2;row++){
        for(int col = 0;col<2;col++){
            arr2[row][col] = arr[row][col] + arr1[row][col];
        }
    }
    //printArray(arr2,2);
    matrixMultiplication(arr,arr1);
    matrixTranspose(arr);
     return 0;
}

int main(){
    //Input and output of 2D array
    int arr[2][2];
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            printf("Enter a Value for [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printArray(arr,2);
    return 0;
} 

#include<stdio.h>

void printArray(int arr[],int size){
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void selectionSort(int arr[],int size){
    for(int i = 0;i<size-1;i++){
        int minIndex = i;
        for(int j = i+1;j<size;j++){
            if(arr[j]>arr[minIndex]){
                minIndex = j;
            }
            int temp = arr[j];
            arr[j] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
    printArray(arr,size);
}

void bubbleSort(int arr[],int size){
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printArray(arr,size);
}

int main(){
    int arr[] = {5,4,3,2,1};
    selectionSort(arr,5);
    bubbleSort(arr,5);
    return 0;
} 

//Let's play with strings

#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    char name2[20];
    printf("Enter your Name: ");
    scanf("%s",name);
    //fgets(name,50,stdin);

    printf("Name: %s\n",name);

    int a = strlen(name);
    printf("Length of String: %d\n",a);

    strcpy(name2,name);
    printf("Name2: %s\n",name2);

    //printf("%s\n",strcat(name,name2));
    printf("%s\n")
    int b = strcmp(name,name2);
    printf("%d\n",b);
    return 0;
}

// Length of String

#include<stdio.h>
#include<ctype.h>

int strlength(char arr[]){
    int i = 0;
    int count = 0;
    while(arr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

void strCopy(char arr[]){
    int size = strlength(arr);
    char arr1[size+1];
    for(int i = 0;arr[i]!='\0';i++){
        arr1[i] = arr[i];
    
    }
    arr1[size] = '\0';
    printf("Printing Copied Array->");
    printf("%s",arr1);
}

void strConcat(char arr[],char arr1[]){
    int size = strlength(arr); 
    int size2 = strlength(arr1);
    int total = size + size2;
    char arr2[size+2];
    for(int i = 0;arr[i]!='\0';i++){
        arr2[i] = arr[i];
    }
    for(int j = 0;arr1[j]!='\0';j++){
            arr2[total + 1] = arr1[j];
    }
    printf("%s\n",arr2);
}

void reverseString(char arr[]){
    int start = 0;
    int size = strlength(arr);
    int end = size -1;
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("%s\n",arr);
}

int checkPallindrome(char arr[]){
    int size = strlength(arr);
    int start = 0;
    int end = size-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

void vowelCount(char arr[]){
        int count = 0;
        int consonant = 0;
    for(int i = 0;arr[i]!=0;i++){
        char ch = tolower(arr[i]);
        if(isalpha(ch)){
            if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
                count++;
        }
    
            else{
                consonant++;
        }
    }
}
    printf("Vowel: %d\n",count);
    printf("Consonant: %d\n",consonant);
}

int main(){
    char arr[10] = "Shivam";
    char arr1[10] = "Mehta";
    int a = strlength(arr);
    printf("Length: %d\n",a);
    strCopy(arr);
    strConcat(arr,arr1);
    reverseString(arr);
    int b = checkPallindrome(arr);
    if(b){
        printf("Pallindrome!");
    }
    else {
        printf("Not a Pallindrome!");
    }
    vowelCount(arr);
    
    return 0;
}

#include<stdio.h>

void swap(int *ptr,int *ptr1){
    int temp = *ptr;
    *ptr = *ptr1;
    *ptr1 = temp;
    printf("%d\n",*ptr);
    printf("%d\n",*ptr1);
}

int main(){
    int a = 2;
    int *ptr = &a;
    int b = 4;
    int *ptr1 = &b;
    swap(ptr,ptr1);
    return 0;
}

//Declare an array and take input using pointers and also print the values using pointers.

#include<stdio.h>
int main(){
    int arr[5];
    for(int i = 0;i<5;i++){
        printf("Enter Value at [%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j<5;j++){
        printf("%d ",*(arr+j));
    }
    return 0;
}

//Declare a float array, use a pointer to print the values and perform pointer arithmetic operation to print the address.

#include<stdio.h>
int main(){
    float arr[5] = {1.4,2.7,3.9,4.5,6.3};
    for(int i = 0;i<5;i++){
        printf("Value at [%d]: %f, Address: %p\n",i,*(arr+i),(arr+i));
    }
} 

//Declare a 2D array, take input and then print the output using pointers.
#include<stdio.h>
int main(){
    int arr[2][2];
    for(int i =0;i<2;i++){
        for(int j = 0;j<2;j++){
            printf("Enter a Value: ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0;i<2;i++){
        for(int j = 0;j<2;j++){
            printf("arr[%d][%d]: %d, Using Pointers: %d\n",i,j,arr[i][j],*(*(arr+i)+j));
        }
    }
} */

//Call by value
/* #include<stdio.h>
void listen(int x){
    x = x + 10;
    printf("Inside function: %d\n",x);
}

int main(){
    int x = 10;
    printf("Befor Passing it in function:%d\n",x);
    listen(x);
    printf("After passing it in Function:%d\n",x);
    return 0;
} 

//Call by reference
#include<stdio.h>
void listen(int *ptr){
    *ptr +=10;
    printf("Inside function(): %d\n",*ptr);
}

int main(){
    int x = 10;
    int *p = &x;
    printf("Inside main(): %d\n",x);
    listen(p);
    printf("After passing value in function\nInside main(): %d\n",x);
    return 0;
}

//Factorial using Recursion
#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int a = factorial(5);
    printf("Factorial: %d",a);
    return 0;
} 

//Fibbonaci Series - 0 1 1 2 3 5 8 13
#include<stdio.h>
int main(){
    int first = 0;
    int second = 1;
    int third,n;
    printf("Enter a value: ");
    scanf("%d",&n);
    if(n == 0){
        printf("0");
    }
    else if(n ==1){
        printf("0 1");
    }
    else{
        printf("0 1 ");
        for(int i = 2;i<n;i++){
            third = first + second;
            printf("%d ",third);
            first = second;
            second = third;
    }
}
return 0;
}

//Fibbonaci using Recursion
#include<stdio.h>
int fibonacci(int n){
    if(n==0)return 0;
    else if(n==1)return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int a;
    printf("Enter a Value: ");
    scanf("%d",&a);
    for(int i = 0;i<a;i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}

#include<stdio.h>
int main(){
   FILE *fp;
   fp = fopen("examprep.txt","w");
   if(fp == NULL){
    printf("File cannot be Opened!\n");
    return 1;
   }

   fprintf(fp,"Tomorrow is your Exam!\n");
   fclose(fp);

   printf("Data written Successfully!");
   return 0;
}

// Create a file and do writing and reading operation.
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("jmd.txt","a");

    if(fp == NULL){
        printf("File not Found!");
        return 1;
    }

    fprintf(fp,"Jor se Bolo Jai Mata Di\n");   
    fclose(fp);

    printf("File appended Successfully!\n");
    return 0;
}

#include<stdio.h>

void selectionSort(int arr[],int size){
    for(int i = 0;i<size -1;i++){
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
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[5] = {5,4,3,7,1};
    selectionSort(arr,5);
    return 0;
}

// malloc()

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,n;
    printf("Enter size of Array: ");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));
    if(arr == NULL){
        printf("Memory Allocation Failed!");
    }

    for(int i =0;i<n;i++){
        printf("Enter a Value: ");
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j<n;j++){
        printf("Index[%d]: %d",j,*(arr+j));
    }
    free(arr);
    return 0;
}

// Structures

#include<stdio.h>
struct Student
{
    char name[20];
    int roll;
    int age;
}s1 = {"Shivam",52,19};
int main(){
    
    struct Student *ptr = &s1;

    printf("Name: %s\nRoll Number: %d\nAge: %d\n",ptr->name,ptr->roll,ptr->age);
    return 0;
}


//Unions
#include<stdio.h>
union Test{
    int x;
    float y;
};

int main(){
    union Test t;
    t.x = 2;
    printf("%d\n",t.x);
    t.y = 4.4;
    printf("%f\n",t.y);

    printf("x after assigning y:%d",t.x);
    return 0;
}*/


using namespace std;
int main(){
    for (int i = 0;i<100000;i++){
        cout<<"Nihal Kapoor ";
    }
    return 0;
}