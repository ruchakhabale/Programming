// accept no from user and ask position to be toggled to the user 
 

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0xFFFFEFFF;   // 13th bit 
    UINT iPos = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);
 
    iNo = iNo & iMask;
   
    printf("Updated number : %d\n",iNo);

    return 0;
}
//if we get same no as op as the ip, then the 13th bit of that no is off 