// $ lines having this sign are for Doubly Linear List
// chck loop once
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
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

void Display(PNODE first)
{
    printf("\nNULL <=> ");           // to indicate that the prev pointer of first node is NULL i.e. 100 chya prev is NULL

    while(first != NULL)
    {
        printf("| %d | <=> ",first->data);
        first = first -> next;
    }

    printf("NULL\n");
}

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
    PNODE temp = NULL;

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
      temp = *first;       // temp madhe 100 aala
       
      
      while(temp->next != NULL)
      {
        temp = temp->next;
      }
      
      temp->next = newn;
      newn->prev = temp;          // $
    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    int i = 0;
    int iCount = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    iCount = Count(*first);      // count la 100 pathavla, // Count(*first)   Count method la 100 dila pahije

    if((iPos < 1) || (iPos > iCount+1))         // this iCount '+ 1' is imp for insertion
    {
      printf("Invalid position\n");
      return;  
    }

    if(iPos == 1)
    {
        InsertFirst(first,iNo);
    }
    else if(iPos == iCount +1)
    {
        InsertLast(first,iNo);
    }
    else
    {
        temp = *first;

        newn = (PNODE) malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next= NULL;
        newn->prev = NULL;

        for(i= 1; i < iPos -1; i++)   // ek ghar aali kade yeun thmbato
        {
            temp = temp->next;
        }

        // right side connection
        newn ->next = temp->next;
        temp->next->prev= newn;  //$

        // left side connection
        temp->next= newn;
        newn->prev = temp;  // $
    }
}

void DeleteFirst(PPNODE first)
{
    if(*first == NULL)             // LL is empty
    {
        return;
    }
    else if((*first)->next == NULL)      // LL has 1 node
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        *first = (*first)->next;       // head madhe 200 ala
        free((*first)->prev);          //$  200 cha prev pointer delete kela
        (*first)->prev = NULL;         //$  200 cha previous la null kela 
    }
}

void DeleteLast(PPNODE first)
{
    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        PNODE temp = NULL;
        temp = *first;

        while(temp -> next -> next != NULL)
        {
            temp = temp ->next; 
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void DeleteAtPos(PPNODE first, int iPos)
{
    int i = 0;
    int iCount = 0;
    PNODE temp = NULL;

    iCount = Count(*first);      // count la 100 pathavla, // Count(*first)   Count method la 100 dila pahije

    if((iPos < 1) || (iPos > iCount))         // here only iCount ghetla karan titake nodes aahet titake ch pahije aaht, 6 astil tar 6 ch pahijet 
    {
      printf("Invalid position\n");
      return;  
    }

    if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == iCount )
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;
       for(i = 1; i < iPos-1; i++)
       {
        temp = temp->next;
       }

       temp->next = temp->next->next;          // temp-400 varun 600 la gelo
       free(temp->next->prev);                //$      // 600 cha prev madhla 500 udala
       temp->next->prev = temp;              //$  // 400  chya next madhe 600 aala 
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    InsertLast(&head,101);
    InsertLast(&head,111);
    InsertLast(&head,121);
    InsertLast(&head,151);

    Display(head);

    iRet = Count(head);
    printf("Number of elements are : %d\n",iRet);

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);
    printf("Number of elements are : %d\n",iRet);

    DeleteLast(&head);

    Display(head);

    iRet = Count(head);
    printf("Number of elements are : %d\n",iRet);

    InsertAtPos(&head,105,4);

    Display(head);

    iRet = Count(head);
    printf("Number of elements are : %d\n",iRet);

    DeleteAtPos(&head,4);

    Display(head);

    iRet = Count(head);
    printf("Number of elements are : %d\n",iRet);

    return 0 ;
}

// types of while loops:
// NULL type 1
// 500 la type 2
// 400 la type 3