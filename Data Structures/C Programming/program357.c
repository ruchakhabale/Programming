#include <stdio.h>

#pragma pack(1)

struct node
{
    int data;  // 4
    struct node * next;  // 8

};

int main()
{
    struct node *head = NULL;   // very imp pointer for Linked List
    struct node obj1, obj2,obj3;  

    head = &obj1;                             

    obj1.data = 11;
    obj1.next = &obj2;    

    obj2.data = 21;
    obj2.next = &obj3;   

    obj3.data = 51;
    obj3.next = NULL;    
        

    printf("%d\n",head->data);                      // 11
    printf("%d\n",head->next->data);                // 21
    printf("%d\n",head->next->next->data);          // 51
   
    return 0;
}