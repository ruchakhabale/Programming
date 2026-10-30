#include <stdio.h>

#pragma pack(1)

struct node
{
    int data;  // 4
    struct node * next;  // 8
};

typedef struct node NODE;
typedef struct node * PNODE;   

int Count(PNODE first)    // int detoy tar ghetana pnn int * madhe ghetla pahije tasa, PNODE detoy mhnje ghetana pnn PNODE madhe ghetla pahije
{
    int iCount = 0;
    

    while(first != NULL)
    {
        iCount++;          // our usual counter   
        first = first  -> next;                          // lly to temp++  
    }

    return iCount;
    

}

int main()
{
    PNODE head = NULL;   

    int iRet = 0;

    NODE obj1, obj2, obj3;  

    head = &obj1;                             

    obj1.data = 11;
    obj1.next = &obj2;    

    obj2.data = 21;
    obj2.next = &obj3;   

    obj3.data = 51;
    obj3.next = NULL;  
    

    iRet = Count(head);     // Count(100)   head madhala data send karat aahe

    printf("Number of Nodes are : %d\n",iRet);
    
    return 0;
}

// detana &PNODE tar ghetana PPNODE (pointer to pointer)

