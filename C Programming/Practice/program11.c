#include <stdio.h>

int main()
{
    int iValue  = 0;
    int iRemainder = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if (iRemainder == 0)     // == is Comparison operator 
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }




    return 0;
}