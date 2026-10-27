// accept no from user and ask position to be toggled to the user, 
//check its 4th bit is on or not, if yess then off it, if off then it shud remain off only 
// this is incomplete on purpose by sir only  

#include<stdio.h>

typedef unsigned int UINT;

// Position : 4 is to be switched off if it is on 
UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0xFFFFFFF7;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)   // filter 
    {
        printf("Invalid bit position");
        return iNo;
    }

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

    iRet = OffBit(iValue,iLocation);

    printf("Updated number is : %d\n",iRet);

    return 0;
}

