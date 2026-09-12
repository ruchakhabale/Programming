#include<stdio.h>
#include<string.h>


int main()
{
    char * str = "Ganesh";
    int iCount = 0;

    printf("length of string is : %lu\n",strlen(str));   //if this line is after the loop, it will stop at \0 so its gives 0 as the op

    while(*str != '\0')
    {
        iCount++; 
        str++;
    }

    printf("Length of string is : %d\n",iCount);
 

    return 0;
}

