#include <stdio.h>
#include <stdlib.h>   // for dynamic memory allocation - malloc and free function

#pragma pack(1)

struct node
{
    int data;  // 4
    struct node * next;  // 8
};

typedef struct node NODE;
typedef struct node * PNODE;   

int main()
{
    struct node * newn = NULL;

    newn = (struct node *) malloc(sizeof(struct node));          // sizeof(strcut node) = 12 bytes i.e. 4 int + 8 pointer

    newn -> data = 11;
    newn -> next = NULL;

    printf("%d\n",newn -> data);
   
     
    return 0;
}


// if we want to access the node we do it by using newn-> (refer bpic) 