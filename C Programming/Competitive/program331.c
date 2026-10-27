// accept no from user and toggle 11th bit of that no
 

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iMask = 0x400;    // 11th bit so 

    iNo = iNo ^ iMask;    // ^ i.e. XOR used bcoz it gives diff la 1 ani same la 0 refer diagram in nb 

    printf("Updated number : %d\n",iNo);


    
   
   



    return 0;
}

