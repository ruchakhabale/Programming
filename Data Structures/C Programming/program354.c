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
    obj1.next = &obj2;    // 200 kade pointe karyala sangto apan i.e address of obj2

    obj2.data = 21;
    obj2.next = NULL;   // last node so NULL

    printf("%d\n",obj1.data);   // 11
    printf("%d\n",obj2.data);   // 21

    
    return 0;
}