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
    PNODE temp = NULL;  // zerox pointer aahe haa, hyachya mule head pointer madhe kahi farak padat nahi

    NODE obj1, obj2, obj3;  

    head = &obj1;                             

    obj1.data = 11;
    obj1.next = &obj2;    

    obj2.data = 21;
    obj2.next = &obj3;   

    obj3.data = 51;
    obj3.next = NULL;  
    
    temp = head;   // 100  (this is also pointing to 100 only just like the head pointer)

    // Sequence

    printf("%d\n",temp->data);            // 11

    temp = temp -> next;                  // 200        we want to tell it to go at 200 but directly we cant so we need to write this, we want to make it work like ++ increment operator
    printf("%d\n", temp -> data);         // 21

    temp = temp -> next;                  // 300
    printf("%d\n", temp -> data);         // 51
    
    temp = temp -> next;                  // NULL
     
    return 0;
}

// the data is scattered not sequential but it is conmected