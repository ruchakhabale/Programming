/* 
accept no from user and CHECK WHETHER last 3rd bit is on or off i.e. 1 or 0
(mojane magun suru hota, magun tisari bit)   bigendian 

*/

#include<stdio.h>

typedef unsigned int UINT;    
// typedef - type apan define kela (used for instead of writing unsigned int everytime,
// we directly write UINT instead of unsigned int (works similar to Macro)

int main()
{
    
    UINT iNo = 0;
    UINT iMask = 4;                       
    UINT iAns = 0; 
    

    printf("Enter  Number : \n");
    scanf("%d",&iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("3rd bit is ON \n");
    }
    else
    {
        printf("3rd bit is OFF\n");
    }

   
    return 0 ;
}