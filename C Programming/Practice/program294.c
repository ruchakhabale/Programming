// reverse display karna ani reverse karna are 2 diff things 
#include<stdio.h>

void ReverseDisplay(char * str)
{
    char *start = NULL;

    start = str;    

    while(*str != '\0')
    {
        str++;
    }
    
    str--;

    while(start <= str)
    {
        printf("%s\n",str);  // %s will display the data till it gets '\0 ; it needs address, so *str nahi fakt str dila aahe 
        str--;    
    } 
    printf("\n"); 
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    ReverseDisplay(Arr);

    return 0;
}

/*
in context of op of this program
there is no need to draw matrix for this program 
*/