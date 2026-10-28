#include <stdio.h>

#pragma pack(1)

struct node
{
    int data;  // 4
    struct node * next;  // 8

};

int main()
{
    struct node obj;                               

    obj.data = 11;
    obj.next = NULL;

    printf("%d\n",obj.data);  // 11    //  . is direct accessing operator
    
    return 0;
}