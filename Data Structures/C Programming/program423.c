#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)    // filter
    {
        return;
    }

    do
    {
        printf("| %d | -> ",first->data);
        first = first->next;

    }while(first != last->next);

    printf("\n");
}

int Count(PNODE first, PNODE last)
{
    int iCount = 0;
    if( first == NULL && last == NULL)
    {
        return iCount;
    }

    do
    {
        iCount++;
        first = first ->next;

    } while (first != last->next);
    
    return iCount;
}

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL; // navin node banvycha pointer

    newn = (PNODE) malloc (sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)   // ll is empty
    {
        *first = newn;
        *last = newn;
    }
    else                                 // atleast one node
    {
        newn ->next = *first;
        *first = newn;
    }

    (*last)->next = *first;            // safe side always write this line everytime, this line should be compulsory for creating it as circular from linear
}

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL; // navin node banvycha pointer

    newn = (PNODE) malloc (sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        (*last) -> next = newn;
        *last = (*last)->next;      // can use *last = newn; this as well
    }

    (*last)->next = *first;
}

void InsertAtPos(PPNODE first, PPNODE last, int iNo,int iPos)
{}

void DeleteFirst(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;

    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);

        *first = NULL;
        *last = NULL;
    }
    else
    {
        temp = *first;    // head madhe 100 aala 

        *first = (*first) ->next;   // 200 zala head madhe
        free(temp);

        (*last)->next = *first;     // classic Circular ll line
    }
}

void DeleteLast(PPNODE first, PPNODE last)
{
    

    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);

        *first = NULL;
        *last = NULL;
    }
    else
    {
        
        
    }
}

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{}

int main()
{
    int iRet = 0;

    PNODE head = NULL;
    PNODE tail = NULL;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of nodes are : %d \n",iRet);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of nodes are : %d \n",iRet);

    DeleteFirst(&head,&tail);

    Display(head,tail);

    iRet = Count(head,tail);

    printf("Number of nodes are : %d \n",iRet);

    return 0;
}

/*
for DeleteFirst(), we can delete by using temp pointer also 
and by using 
free(last->next) // last chya next madhe 100 asto toh udala 

*/