//rechek
#include<stdio.h>
#include<string.h>

void Display(char str[])
{
    printf("Input string is %s\n", str);
}

int main()
{
    char Arr[50] = {'\0'};   

    printf("Enter String : \n");
    scanf("%s",Arr);  //redo

    printf("Entered String is : %s\n",Arr);

    Display(Arr);   //Display(100)

    return 0;
}