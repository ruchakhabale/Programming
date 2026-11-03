/*
FINAL PROGRAM OF ALL 8 FUNCTIONS

IN INTERVIEW they expect you to know the diagram so focus more on the understanding of the concept not 
the syntax, concept is given more importance

visual beautificaton of the L.L.
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while (first != NULL)         //  Type 1 of while          // can also be written as : while (first != NULL) not prefferable
    {
        printf("| %d | -> ",first->data);
        first = first->next;       // first la (i.e. pointer la )  pude jaa sangnya sathi hii line
    }

    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while( first != NULL)     //  Type 1 of while        // can also be written as : while (first != NULL) not prefferable
    {
        iCount++;
        first = first -> next;      // first la (i.e. pointer la )  pude jaa sangnya sathi hii line
    }

    return iCount;

}

// &head, data (shirt var cha no) i.e. PPNODE first, int iNo  these 2 are given as parameters to Insert
void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;   // ethe pointer banla

    newn = (PNODE) malloc(sizeof(NODE));   // ethe node banla

    newn->data = iNo;
    newn->next = NULL;

    // below and this if(*first == NULL)  both will work same only but USE THIS IN THE INTERVIEW, ITS UNIQUE
    if( NULL == *first )          // L.L. is empty        // *first mhnje head kade point karnara varcha pointer( our board var cha diagram)
    {
        *first = newn;

    }
    else                        // L.L. contains ATLEAST ONE NODE
    {
        newn->next = *first;
        *first = newn;
    }

}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;   // ethe pointer banla
    PNODE temp = NULL;   // head pointer cha zerox pointer

    newn = (PNODE) malloc(sizeof(NODE));   // ethe node banla

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)          // L.L. is empty        // *first mhnje head kade point karnara varcha pointer( our board var cha diagram)
    {
        *first = newn;

    }
    else                        // L.L. contains ATLEAST ONE NODE
    {
        temp = *first;     // head pointer cha zerox pointer

        while(temp->next != NULL)     // Type 2 of while
        {
            temp = temp -> next;

        }

        temp->next = newn;
    }

}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    int iCount = 0;
    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;
    

    iCount = Count(*first);   // CallbyValue Count naava chi method aahe

    if((iPos < 1) || (iPos > iCount + 1))            // iPos < 1 -- mhnje negative asel tar ani iCount + 1 for deletion purpose
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first,iNo);               // ethe first aahe *first nahi
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first,iNo);               // ethe first aahe *first nahi
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        temp = *first;    // temp madhe 100 aala

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;       // Right side node connect
        temp->next = newn;             // Left side node connect
    }
}

// Delete karnarya la Data chi garaj NAHI so only &head i.e. PPNODE first is given as parameter to Delete
void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                     // LL is empty
    {
        return;
    }
    else if((*first) ->next == NULL)        // LL contains ONLY 1 node  writing (*first) in bracket is imp here as -> is also present in the same line
    {
        free(*first);
        *first = NULL;                   // head madhe NULL taknya sathi hii line
    }
    else                                  // LL contains more than 1 node
    {
        temp = *first;    // hya mule 100 aala 
        *first = (*first)->next;    // hya mule 200 aala 
        free(temp);  // hya mule temp madhe aslela 100 wala node free zala  
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)                     // LL is empty
    {
        return;
    }
    else if((*first) ->next == NULL)        // LL contains ONLY 1 node  writing (*first) in bracket is imp here as -> is also present in the same line
    {
        free(*first);
        *first = NULL;                   // head madhe NULL taknya sathi hii line
    }
    else                                  // LL contains more than 1 node
    {
        temp = *first;

        while(temp->next->next != NULL)    // //  Type 3 of while
        {
            temp = temp ->next;
        }

        free(temp->next);
        temp->next = NULL;

    }
}

void DeleteAtPos(PPNODE first, int iPos)
{
    int iCount = 0;
    int i = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);   // CallbyValue Count naava chi method aahe

    if((iPos < 1) || (iPos > iCount ))            // iPos < 1 -- mhnje negative asel tar ani iCount + 1 for deletion purpose
    {
        printf("Invalid Position \n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first);               // ethe first aahe *first nahi
    }
    else if(iPos == iCount)
    {
        DeleteLast(first);               // ethe first aahe *first nahi
    }
    else
    {
        temp = *first;       // temp madhe 100 aala

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp ->next;
        }

        target = temp -> next;

        temp->next = target->next;

        free(target);


    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    // InsertFirst aslyamule tee first first la insert karat janar ji ulta order hote,so to get in the same order as we want it to be, write it ulta 
    InsertFirst(&head,101);     
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);
    
    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&head,105,4);          // &head - 100, 105 - data (shirt cha no), 4 - iPos i.e. position

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    DeleteAtPos(&head,4);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);
    
    return 0;
}