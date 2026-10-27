// accept no from user and ask position to be toggled to the user 
 

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0xFFFFFFF7;  // 4th bit position  
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);
 
    iNo = iNo & iMask;
   
    printf("Updated number : %d\n",iNo);

    return 0;
}
/*
if we get same no as op as the ip, then the 4th bit of that no is off thats why



*/

