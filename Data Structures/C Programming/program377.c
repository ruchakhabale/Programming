/*
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
    while (first)                  // can also be written as : while (first != NULL) not prefferable
    {
        printf("| %d | -> ",first->data);
        first = first->next;       // first la (i.e. pointer la )  pude jaa sangnya sathi hii line
    }

    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while( first != NULL)            // can also be written as : while (first != NULL) not prefferable
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

    newn = (PNODE) malloc(sizeof(NODE));   // ethe node banla

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)          // L.L. is empty        // *first mhnje head kade point karnara varcha pointer( our board var cha diagram)
    {
        *first = newn;

    }
    else                        // L.L. contains ATLEAST ONE NODE
    {
    }

}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{}

// Delete karnarya la Data chi garaj NAHI so only &head i.e. PPNODE first is given as parameter to Delete
void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE first)
{}

void DeleteAtPos(PPNODE first, int iPos)
{}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    // if else mule tee ulta order madhe lihaycha, just so that it gets in the same order as we want it to be 
    InsertFirst(&head,101);     
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n",iRet);

    return 0;
}