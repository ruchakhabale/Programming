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

        void Display()
        {}

        int Count()
        {
            return this->iCount;
        }

        void InsertFirst(int iNo)
        {}

        void InsertLast(int iNo)
        {}

        void InsertAtPos(int iNo, int iPos)
        {}

        void DeleteFirst()
        {}

        void DeleteLast()
        {}

        void DeleteAtPos(int iPos)
        {}
};

int main()
{
    SinglyLL sobj;       
    
    
   
    return 0;
}

/*
1. this use kara
2. declare eka class madhe kara
3. define (body) dusrya class madhe karycha

in this program we have both the declarations and empty definitions within the same class, the next program403, has it separated
declaration - building che flat owners chi list
definition - specific flat chya aat jaan is like definition
*/