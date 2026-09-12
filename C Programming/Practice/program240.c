#include<stdio.h>
#include<string.h>


int main()
{
    char Arr[50] = {'\0'};   //empty array set to its default value of character

    printf("Enter String : \n");
    scanf("%s",Arr);   // Issues (accepts data only till we dont use the first space, like jay ganesh, i.e. doesnt accept the whitespace)  here, we dont need, &Arr bcoz here Arr is an Array, so nusta Arr gives base address only

    printf("Entered String is : %s\n",Arr);


    return 0;
}

