// accept no from user and CHECK WHETHER last 3rd bit is on or off i.e. 1 or 0
// (mojane magun suru hota, magun tisari bit)   big end something cross check
// mask used fro this program  to program316, we have created and used the Static Mask designing, as the position is Hardcoded

#include<stdio.h>

int main()
{
    int iNo = 0;
    int iMask = 4;                        //3rd bit so 4 from the 8 4 2 1
    int iAns = 0; 
    

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