//rechek
#include<stdio.h>
#include<string.h>

void Display(char * str)
{
    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;
}

int main()
{
    char Arr[50] = {'\0'};   

    printf("Enter String : \n");
    scanf("%s",Arr);  

    Display(Arr);   //Display(100)

    return 0;
}