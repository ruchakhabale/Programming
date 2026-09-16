// swapping R.L.ex. of hot choco, nutella and the temp mug i.e. using 3 variables 
#include<stdio.h>

// Call by Address
void Swap(int *ptr1, int *ptr2)
{
    int temp = 0;

    //ethe he direct change zale
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}


int main()
{
    int i = 11;
    int j = 21;

    int temp = 0;  // 3rd cup 

    Swap(&i,&j);   // Call by Address

    printf("%d\n",i);
    printf("%d\n",j);

    return 0;
}