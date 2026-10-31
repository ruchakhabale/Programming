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
typedef struct node ** PPNODE;  // this is not going to be used bcoz we are not going to send **first here in C++

int main()
{
    NODE obj;

    cout<<sizeof(obj)<<endl;

    return 0;
}