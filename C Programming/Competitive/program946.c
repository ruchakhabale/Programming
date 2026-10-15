#include<stdio.h>

int main(int argc, char *argv[])
{
    int Ans = 0;

    if(argc != 3)
    {
        printf("Invalid number of arguments \n");
        return -1;
    }

    //Ans = argv[1] + argv[2];   // Error ( as the data is char*)

    printf("Addition is : %d",Ans);

    return 0;
}
