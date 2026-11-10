
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
    // shell making 

    SinglyLL sobj;

    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    // menu making 
    while(iChoice != 9)          // unconditional loop - joh pariyant break karat nahi toh pariyant fhirat nahi toh pariyant
    {
        printf("--------------------------------------\n");
        cout<<"Enter your choice : \n";
        printf("--------------------------------------\n");
        cout<<"1 : Insert node at first position \n";
        cout<<"2 : Insert node at last position \n";
        cout<<"3 : Insert node at given position \n";
        cout<<"4 : Delete node at first position \n";
        cout<<"5 : Delete node at last position \n";
        cout<<"6 : Delete node at given position \n";
        cout<<"7 : Display the elements \n";
        cout<<"8 : Count the number of elements\n";
        cout<<"9 : Terminate the application \n";
        printf("--------------------------------------\n");
        cin>>iChoice;                                          // input ghetla 

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value : \n";
                cin>>iValue;
                sobj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the value : \n";
                cin>>iValue;
                sobj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the value : \n";
                cin>>iValue;
                cout<<"Enter the position\n";
                cin>>iPosition;
                sobj.InsertAtPos(iValue,iPosition);
                break;

            case 4:
                sobj.DeleteFirst();
                break;

            case 5:
                sobj.DeleteLast();
                break;

            case 6:
                cout<<"Enter the position\n";
                cin>>iPosition;
                sobj.DeleteAtPos(iPosition);
                break;

            case 7:
                cout<<"Elements of the Linked list are : \n";
                sobj.Display();
                break;
            
            case 8:
                iRet = sobj.Count();
                cout<<"Number of elements are : "<<iRet<<"\n";
                break;

            case 9:
                cout<<"Thank you for using Marvellous Infosystems Application\n";
                break;

            default:
                cout<<"Inavlid Choice \n";
        }
    }
    
    return 0;
}


/*
1. this use kara
2. declare eka class madhe kara
3. define (body) dusrya class madhe karycha

declaration - building che flat owners chi list
definition - specific flat chya aat jaan is like definition
*/
