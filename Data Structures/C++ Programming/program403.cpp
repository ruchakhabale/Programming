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
        // function declarations
        SinglyLL();      
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        
};

SinglyLL :: SinglyLL()                                  //SinglyLL cha class ch naav and dusara Constructor cha naav aahe default constructor
{
    this->first = NULL;
    this->iCount = 0;
}

void SinglyLL :: Display()
{}

int SinglyLL :: Count()
{
    return this->iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{}
void SinglyLL :: InsertLast(int iNo)
{}
void SinglyLL :: InsertAtPos(int iNo, int iPos)
{}
void SinglyLL :: DeleteFirst()
{}
void SinglyLL :: DeleteLast()
{}
void SinglyLL :: DeleteAtPos(int iPos)
{}

int main()
{
    SinglyLL sobj;       
    
    
   
    return 0;
}




/*
1. this use kara
2. declare eka class madhe kara
3. define (body) dusrya class madhe karycha

declaration - building che flat owners chi list
definition - specific flat chya aat jaan is like definition
*/