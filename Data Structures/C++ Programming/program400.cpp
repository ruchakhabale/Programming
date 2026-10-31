#include<iostream>
using namespace std;

#pragma pack(1)    // concept of this is same in c and c++
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        PNODE first;    // pointer aahe, C madhlya main madhla head is ethe class madhla first
        int iCount;

        SinglyLL()      // default constructor
        {
            
            this->first = NULL;
            this->iCount = 0;
        }
};

int main()
{
    SinglyLL sobj;       
    
    // if 5 nodes are present

    sobj.first = NULL;      // DRAWBACK
    sobj.iCount = 15;       // DRAWBACK

    
    return 0;
}
