#include<stdio.h>
#include<string.h>


int main()
{
    char Arr[50] = {'\0'};   //empty array set to its default value of character

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);  // [^'\n]s this is regex(regular expression)  this line is used to tell that acceptthe ip untill you get the new line character i.e. when we press enter 

    printf("Entered String is : %s\n",Arr);


    return 0;
}