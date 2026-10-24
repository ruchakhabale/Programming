// learn working of shift operators

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    int iCnt = 0;
    for(iCnt =1; iCnt <= 1000; iCnt++)
    {
        printf("%d\t%X\n",iCnt,iCnt);     // %d - decimal and %X - hexdecimal 
    }



    return 0;
}