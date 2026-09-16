// reverse display karna ani reverse karna are 2 diff things and this is the actual reverse (versions)
//using Call by Address is really imp in c 
#include<stdio.h>

void strrevX(char * str)
{
    /*
    name of 3 pointers used in this program:
    str
    start 
    end
    */ 
    
    char *start = NULL;   
    char *end = NULL;
    char temp = '\0';   //rikama cup

    start = str;    

    while(*str != '\0')
    {
        str++;
    }
    
    str--;
    end = str;  //pointer named 'end' will point to '\0'

    while(start <= end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
    } 
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    strrevX(Arr);

    printf("Updated string is : ",Arr);

    return 0;
}

