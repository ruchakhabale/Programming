#include<stdio.h>

void strlenX(char * str)
{
    *str = 'A';  // this changes the 1st letter of the array (which is not correct)
}

int main()
{
    char Arr[50] = {'\0'};  
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    strlenX(Arr);

    printf("String is : %s\n",Arr);


    return 0;
}