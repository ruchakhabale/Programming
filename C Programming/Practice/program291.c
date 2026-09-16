// reverse display karna ani reverse karna are 2 diff things 
#include<stdio.h>

void ReverseDisplay(char * str)
{
    char *start = NULL;

    start = str;    //start naav cha 2nd pointer holds the address of str i.e. 100

    while(*str != '\0')
    {
        str++;
    }
    // Issue (the gap seen in the op, refer op for that )
    while(start <= str)
    {
        printf("%c\n",*str);   //*str mhnje ek ek single letter 
        str--;    //loop ulta fhirto 
    }  
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    ReverseDisplay(Arr);

    return 0;
}