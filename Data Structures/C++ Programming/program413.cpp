// complete this file 
#include<iostream>
using namespace std;

#pragma pack(1)    // concept of this is same in c and c++
struct node
{
    int data;
    struct node *next;
    struct node *prev;  // $
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{
    private:
        PNODE first;    // pointer aahe, C madhlya main madhla head is ethe class madhla first
        PNODE prev;
        int iCount;

    public:
        // function declarations
        DoublyLL();      
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        
};

DoublyLL :: DoublyLL()                                  //SinglyLL cha class ch naav and dusara Constructor cha naav aahe default constructor
{
    this->first = NULL;
    this->prev = NULL;
    this->iCount = 0;
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=>";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

int DoublyLL :: Count()
{
    return this->iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;                //$

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;       // $
        this->first = newn;
    }
    this-> iCount++;
}
void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;                //$

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        temp = this->first;

        while(first != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
    this-> iCount++;
}
void DoublyLL :: InsertAtPos(int iNo, int iPos)
{}
void DoublyLL :: DeleteFirst()
{}
void DoublyLL :: DeleteLast()
{}
void DoublyLL :: DeleteAtPos(int iPos)
{}

int main()
{
    int iRet = 0;
    DoublyLL dobj;   
    

    PNODE head = NULL;
    PNODE prev = NULL;
    
    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;
    
    
   
    return 0;
}




/*
1. this use kara
2. declare eka class madhe kara
3. define (body) dusrya class madhe karycha

declaration - building che flat owners chi list
definition - specific flat chya aat jaan is like definition
*/