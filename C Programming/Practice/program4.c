#include<stdio.h>

int main()
{
    int i, j, k;

    printf("Enter first number\n");
    scanf("%d",&i);  //there shouldn't be any \n in scanf 

    printf("Enter second number\n");
    scanf("%d",&j);

    k = i + j;

    printf("Addition is :  %d\n",k);

    return 0;
}

