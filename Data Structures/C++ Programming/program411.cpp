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
{
    PNODE temp = NULL;

    temp = this->first;

    while(temp != NULL)
    {
        cout << "| "<<temp->data<<" |-> ";
        temp = temp->next; 
    }

    cout<<"NULL"<<endl;
}

int SinglyLL :: Count()
{
    return this->iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(this->first == NULL)         // LL is empty
    {
        this->first= newn;
    }
    else
    {
        newn->next = this->first;
        this->first = newn;
    }


    this->iCount++;       // this iCount++ is common for both, even if it is if la kiva else la, kuthe jari insertt zala tari iCount vadla pahije
    
}
void SinglyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(this->first == NULL)         // LL is empty
    {
        this->first= newn;
    }
    else
    {
        temp = this->first;

        while(temp->next != NULL)
        {
            temp = temp ->next;
        }

        temp->next = newn;

    }

    this->iCount++;       // this iCount++ is common for both, even if it is if la kiva else la, kuthe jari insertt zala tari iCount vadla pahije
}
void SinglyLL :: InsertAtPos(int iNo, int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position";
        return;
    }

    if(iPos == 1)
    {
        this->InsertFirst(iNo);      // this-> can be used for functions too
    }
    else if(iPos == iCount +1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;

        temp = this->first;

        for(i = 1; i <= iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        this->iCount++;
        
    }
}
void SinglyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    if(this->first == NULL)    // LL is empty
    {
        return;
    }
    else if(this->first->next == NULL)    // single node LL (sobj2 chi diagram from board)
    {
        delete(this->first);
        this->first = NULL;
    }
    else                                    // multi node LL (sobj3 chi diagram from board)
    {
        temp = this->first;  // 100 ala 

        this->first = this->first->next;

        delete temp;

    }

    this->iCount--;
}
void SinglyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(this->first == NULL)    // LL is empty
    {
        return;
    }
    else if(this->first->next == NULL)    // single node LL (sobj2 chi diagram from board)
    {
        delete(this->first);
        this->first = NULL;
    }
    else                                    // multi node LL (sobj3 chi diagram from board)
    {
        temp = this->first;    // 100 ala
        
        while(temp->next->next != NULL)          // type 3 of while
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next= NULL;
    }

    this->iCount--;
}
void SinglyLL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position";
        return;
    }

    if(iPos == 1)
    {
        this->DeleteFirst();      // this-> can be used for functions too
    }
    else if(iPos == iCount )
    {
        this->DeleteLast();
    }
    else
    {
        temp = this->first;

        for(i = 1; i <= iPos-1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        delete target;
        
        this->iCount--;
    }
}

int main()
{
    int iRet = 0;
    SinglyLL sobj;
    
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    sobj.DeleteFirst();

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    sobj.DeleteLast();

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    sobj.InsertAtPos(105,4);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;

    sobj.DeleteAtPos(4);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of elements are : "<<iRet<<endl;
  
    return 0;
}


// rechk with 412 tithala code ethe aala aahe, edit and run that 

/*
1. this use kara
2. declare eka class madhe kara
3. define (body) dusrya class madhe karycha

declaration - building che flat owners chi list
definition - specific flat chya aat jaan is like definition
*/