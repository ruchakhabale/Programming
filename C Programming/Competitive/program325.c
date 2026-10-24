// learn working of shift operators
#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 1;
    int iCnt = 1;

    for(iCnt = 1; iCnt <= 33 ; iCnt++) 
    {
        printf("%d : %X\n",iCnt, iMask);  
        iMask = iMask << 1;
    }

   
/*
33 : 0 asa yet karan te overflow hota, 32bit is the range so 

the highest no we can store in a bit is:
1111 1111 1111 1111 1111 1111 1111 1111 
 F    F    F    F    F    F    F     F - hexadecimal cha highest 

*/


    return 0;
}