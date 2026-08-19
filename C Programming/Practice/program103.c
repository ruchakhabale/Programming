#include <stdio.h>

void CallByAddress(int *iPtr)
{
    (*iPtr)++;    
}

int main()
{
    int iValue = 11;

    CallByAddress(&iValue);    //i.e. CallByAddress(100); i.e. Lvalue(Location Value)

    printf("Value after function call : %d\n",iValue);
    
    return 0;
}
