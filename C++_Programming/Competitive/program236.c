#include<stdio.h>


int main()
{
    char * str = "Ganesh";  // char str[] = "Ganesh"   both are same (array == pointer can be treated as e.o.)

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;



    
    return 0;
}

