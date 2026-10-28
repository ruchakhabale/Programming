#include <stdio.h>

#pragma pack(1)

struct node
{
    int data;  // 4
    struct node * next;  // 8

};

int main()
{
    struct node obj1, obj2;                               

    obj1.data = 11;
    obj1.next = &obj2;    // 200

    obj2.data = 21;
    obj2.next = NULL;   // last node so NULL

    printf("%u\n",&obj1);                // 100
    printf("%u\n",&obj2);                // 200
    printf("%u\n",obj1.next);            // 200
    printf("%u\n",obj2.next);            // Null i.e. 0
    printf("%d\n",obj1.next->data);      //21


    
    return 0;
}