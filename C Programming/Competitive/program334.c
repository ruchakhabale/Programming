// accept no from user and ask position to be toggled to the user 
// here in this prog, we take the business logic outside main, in a diff function
#include<stdio.h>

typedef unsigned int UINT;

// can upload this on GitHub
UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1; // LSB 1 aahe 
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0, iLocation = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter bit position : \n");
    scanf("%d",&iLocation);

    iRet = ToggleBit(iValue,iLocation);

    printf("Updated number is : %d\n",iRet);

    return 0;
}

