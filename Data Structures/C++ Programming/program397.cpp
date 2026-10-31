#include<iostream>
using namespace std;

#pragma pack(1)    // concept of this is same in c and c++
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE newn = NULL;
    NODE obj;

    // newn = (PNODE) malloc(sizeof(NODE)); in C
    newn = new NODE;

    newn->data = 11;
    newn->next = NULL;

    cout<<newn->data<<endl;

    //free(newn)  in C
    delete newn;

    return 0;
}