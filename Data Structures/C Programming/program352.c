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

    printf("%d\n",sizeof(obj));  // 12
    // 4(int) + 8(pointer)
    
    return 0;
}