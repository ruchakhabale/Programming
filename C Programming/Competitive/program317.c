/* 
accept no and position (of bit) from user and CHECK WHETHER the bit at that bit is ON or NOT i.e. 1 or 0 
Dynamic mask designing as the position is dynamic(taken from user)

*/

#include<stdio.h>

typedef unsigned int UINT;    

int main()
{
    
    UINT iNo = 0;
    UINT iMask = 0x1;  //position of the starting point                  
    UINT iAns = 0;
    UINT iPos = 0; 
    

    printf("Enter  Number : \n");
    scanf("%d",&iNo);

    printf("Enter the position : \n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos - 1);    // shift operator here it is left shift operator

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("Bit is ON \n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

   
    return 0 ;
}