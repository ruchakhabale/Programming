/* 
accept no from user and CHECK WHETHER last 13th bit is on or off i.e. 1 or 0

we use the Mask logic refer the diagram from board
0000 0000 0000 0000 0001 0000 0000 0000
 0    0     0   0    1    0    0    0
 iMask = 0x1000

 hexadecimal value deli iMask la
*/

#include<stdio.h>

typedef unsigned int UINT;    


int main()
{
    
    UINT iNo = 0;
    UINT iMask = 0x1000;           // 13th bit so  2^12(value of 2 raise to 12 )      but here it is given in hexadecimal form 
    UINT iAns = 0; 
    

    printf("Enter  Number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("13th bit is ON \n");
    }
    else
    {
        printf("13th bit is OFF\n");
    }

   
    return 0 ;
}