#include <stdio.h>

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
    PNODE head = NULL;   
    PNODE temp = NULL;  // temporary like zerox pointer of head pointer

    NODE obj1, obj2, obj3;  

    head = &obj1;                             

    obj1.data = 11;
    obj1.next = &obj2;    

    obj2.data = 21;
    obj2.next = &obj3;   

    obj3.data = 51;
    obj3.next = NULL;  
    
    temp = head;   // this is also pointing to 100 only just like the head pointer
        

    printf("%d\n",temp->data);                      // 11
    printf("%d\n",temp->next->data);                // 21
    printf("%d\n",temp->next->next->data);          // 51
   
    return 0;
}