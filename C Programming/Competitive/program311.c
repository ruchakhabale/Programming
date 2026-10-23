/* 
accept no from user and CHECK WHETHER last 7th bit is on or off i.e. 1 or 0

we use the Mask logic refer the diagram from board
*/

#include<stdio.h>

typedef unsigned int UINT;    
// typedef - type apan define kela (used for instead of writing unsigned int everytime,
// we directly write UINT instead of unsigned int (works similar to Macro)

int main()
{
    
    UINT iNo = 0;
    UINT iMask = 64;           // 7th bit so 64 2^5(value of 2 raise to 5 )              
    UINT iAns = 0; 
    

    printf("Enter  Number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("7th bit is ON \n");
    }
    else
    {
        printf("7th bit is OFF\n");
    }

   
    return 0 ;
}