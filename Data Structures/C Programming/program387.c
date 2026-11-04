// $ lines having this sign are for Doubly Linear List

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

int Count(PNODE first)
{
    return 0;
}

void Display(PNODE first)
{}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof(NODE));

    newn -> data = iNo;
    newn ->next = NULL;
    newn -> prev = NULL;          //$

    if(NULL == *first)             // LL is empty
    {
        *first = newn;
    }
    else
    {
        newn->next =  *first;              
        (*first)->prev = newn;                // $    100 chya previous madhe newn chi value yenar
        *first = newn;                        // sirana sangch kii mulachya shirt cha var cha no kyy aahe tee

    }


}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE) malloc(sizeof(NODE));

    newn -> data = iNo;
    newn ->next = NULL;
    newn -> prev = NULL;          //$

    if(NULL == *first)             // LL is empty
    {
        *first = newn;
    }
    else
    {
        
    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{}

void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE first)
{}

void DeleteAtPos(PPNODE first, int iPos)
{}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);


    return 0 ;
}