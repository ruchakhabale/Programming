//re chck
#include<stdio.h>
#include<string.h>

void Display(char * str)
{
    printf("Input string is %s\n", str);
}

int main()
{
    char Arr[50] = {'\0'};   

    printf("Enter String : \n");
    scanf("%s",Arr);  

    printf("Entered String is : %s\n",Arr);

    Display(Arr);   //Display(100)

    return 0;
}

/*
here, the function nneds only 1 paramtere, i.e. the array and not its size(iSize from previous codes)
 that bcoz here we can tell to understand the end of array by recogninizing when we get the \0 that shud be the end of array 
 so no need to give its size explicitly  

*/