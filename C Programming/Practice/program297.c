// swapping R.L.ex. of hot choco, nutella and the temp mug i.e. using 3 variables 
#include<stdio.h>

// Call by Value , swapping No1 and No2 madhe ch zala, but i and j la kalal nahi kyy zala tee
void Swap(int No1, int No2)
{
    int temp = 0;
    
    temp = No1;
    No1 = No2;
    No2 = temp;

}
//no need to return bcoz this is callbyvalue

int main()
{
    int i = 11;
    int j = 21;

    int temp = 0;  // 3rd cup 

    Swap(i,j);

    printf("%d\n",i);
    printf("%d\n",j);

    return 0;
}