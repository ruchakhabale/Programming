/* 
accept no from user and CHECK WHETHER last 17th bit is on or off i.e. 1 or 0

we use the Mask logic refer the diagram from board
here, we manually create a mask
in such position we use the value of hexadecimal of the position 
0000 0000 0000 0001 0000 0000 0000 0000
 0    0     0   1    0    0    0    0
 iMask = 0x00010000
*/

#include<stdio.h>

typedef unsigned int UINT;    
// typedef - type apan define kela (used for instead of writing unsigned int everytime,
// we directly write UINT instead of unsigned int (works similar to Macro)

int main()
{
    
    UINT iNo = 0;
    UINT iMask = 0x00010000;     // 17th bit so  2^16(value of 2 raise to 16 )               
    UINT iAns = 0; 
    

    printf("Enter  Number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("17th bit is ON \n");
    }
    else
    {
        printf("17th bit is OFF\n");
    }

   
    return 0 ;
}