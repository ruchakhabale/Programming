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

    // Iteration
    // Time Complexity :  (N)

    while(temp != NULL)
    {
        printf("%d\n",temp->data);            
        temp = temp -> next;                 // lly to temp++
    }
     
    return 0;
}

