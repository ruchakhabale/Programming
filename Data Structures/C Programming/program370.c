/*
IN INTERVIEW they expect you to know the diagram so focus more on the understanding of the concept not 
the syntax, concept is given more importance

Linked List is dynamically grown content - Run time la grow hoto

this can be used as a template for the further functions
*/

#include<stdio.h>

struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{}

int Count(PNODE first)
{
    return 0;
}

// &head, data (shirt var cha no) i.e. PPNODE first, int iNo  these 2 are given as parameters to Insert
void InsertFirst(PPNODE first, int iNo)
{}

void InsertLast(PPNODE first, int iNo)
{}

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




    return 0;
}