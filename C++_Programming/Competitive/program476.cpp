#include<iostream>
using namespace std;

// rechk op 
float Maximum(float No1, float No2)
{
    float Ans = 0;

    if(No1 > No2)
    {
        Ans = No1;
    }
    else
    {
        Ans = No2;
    }
};

int main()
{

    cout<<Maximum(21.5f,11.5f)<<"\n";

    return 0;
}