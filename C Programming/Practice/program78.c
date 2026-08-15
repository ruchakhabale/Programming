#include <stdio.h>

void DisplayDigits(int iNo)
{

    int iDigit = 0;

    while(iNo > 0)    //(>0) or (!=0)  does the same work, it doesnt exact mean the same thing, but can use for our simplicity or ease
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
    
    return 0;
}