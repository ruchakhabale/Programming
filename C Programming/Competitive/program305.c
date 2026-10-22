#include<stdio.h>

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;
    

    printf("Enter First Number : \n");
    scanf("%d",&No1);

    printf("Enter Second Number : \n");
    scanf("%d",&No2);

    Ans = No1 & No2;    // & - Bitwise 'and' operator

    printf("AND : %d\n",Ans);

    Ans = No1 | No2;    // | - Bitwise 'or' operator

    printf("OR : %d\n",Ans);

    Ans = No1 ^ No2;     // ^ - Bitwise 'xor' operator

    printf("XOR : %d\n",Ans);

    

    return 0;
}

/*
These Bitwise operators internally and automatically work on Binary data, so we dont need to convert the data to Binary 
explicitly, as it changes the entire value

we(end user) dont need to convert the number into binary explicitly, the operator does it automatically on internal level


*/