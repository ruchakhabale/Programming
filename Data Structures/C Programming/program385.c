// Doubly LL starts from here (Doubly Linear Linked list) 
//$ lines having this sign are for Doubly Linear List

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


int main()
{
    printf("%d\n",sizeof(NODE));     // 20 bytes expected


    return 0 ;
}