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
        
        SinglyLL()      // default constructor
        {
            cout<<"Inside Constructor";
            this->first = NULL;
        }
};

int main()
{
    SinglyLL sobj;
    
    return 0;
}







/*
singly ll - linear linked list
singly cl - circular linked list

doubly ll - linear linked list
doubly cl - circular linked list

object chya aat madhla access kartana hee use karycha:
self. in Python is lly to this. in Java and this-> in C++

*/