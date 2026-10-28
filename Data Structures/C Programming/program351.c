#include <stdio.h>

struct node
{
    int data;  // 4
    struct node * next;  // 8

};

int main()
{
    struct node obj;          //Object of structure

    printf("%d\n",sizeof(obj));  // 16 (irrespective of what my op is bcoz it is Platform and Architecture dependent )
    // 4(int) + 4(padding) + 8(pointer)


    return 0;
}