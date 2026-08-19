#include <stdio.h>

void CallByValue(int iNo)
{
    iNo++;
}

int main()
{
    int iValue = 11;

    CallByValue(iValue);    //i.e. CallByValue(11); i.e. Rvalue(Resident Value)

    printf("Value after function call : %d\n",iValue);
    
    return 0;
}

