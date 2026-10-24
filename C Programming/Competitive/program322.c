// learn working of shift operators
#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 1;
    int iCnt = 1;

    for(iCnt = 1; iCnt <= 32 ; iCnt++)   // here last 32nd bit is signed so give -ve op value
    {
        printf("%d : %d\n",iCnt, iMask); // refer prog318, replacement for the sequence written there, by loop in this file 
        iMask = iMask << 1;
    }

   



    return 0;
}