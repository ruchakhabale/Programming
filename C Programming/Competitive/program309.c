// accept no from user and CHECK WHETHER last 3rd bit is on or off i.e. 1 or 0
// (mojane magun suru hota, magun tisari bit)   big end something cross check

#include<stdio.h>

int main()
{
    //  unsigned is only for the topic of Bitwise
    // unsigned use keli karan purna 32 bits use karta yetat
    unsigned int iNo = 0;
    unsigned int iMask = 4;                        //3rd bit so 4 from the 8 4 2 1
    unsigned int iAns = 0; 
    

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