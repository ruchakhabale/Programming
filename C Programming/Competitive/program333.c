// accept no from user and ask position to be toggled to the user 
 

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0;
    UINT iPos = 0;


    printf("Enter number : \n");
    scanf("%d",&iNo);

    printf("Enter bit position : \n");
    scanf("%d",&iPos);

    iMask = iMask << (iPos -1);

    iNo = iNo ^ iMask;    

    printf("Updated number : %d\n",iNo);


    return 0;
}

