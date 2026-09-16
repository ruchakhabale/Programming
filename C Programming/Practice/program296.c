// swapping R.L.ex. of hot choco, nutella and the temp mug i.e. using 3 variables 
#include<stdio.h>

int main()
{
    int i = 11;
    int j = 21;

    int temp = 0;  // 3rd cup 

    temp = i;
    i = j;
    j = temp;


    printf("%d\n",i);
    printf("%d\n",j);

    return 0;
}