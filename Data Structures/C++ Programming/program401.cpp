// this has error on purpose
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
    private:
        PNODE first;    // pointer aahe, C madhlya main madhla head is ethe class madhla first
        int iCount;

    public:
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

    //sobj.first = NULL;      // error
    //sobj.iCount = 15;       // error

    
    return 0;
}
