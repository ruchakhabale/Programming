#include<stdio.h>

float AddTwoNumbers(float fNo1, float fNo2)
{
    
}

int main()
{
    
    float fValue1 = 0.0f;           //To store first input 
    float fValue2 = 0.0f;           //to store second input 
    float fResult = 0.0f;            //to store result 

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("Addition is :  %f\n",fResult);   //perform the addition 

    return 0;
}
