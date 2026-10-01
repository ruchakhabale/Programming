#include<iostream>
using namespace std;

// rechk op 
template<class T>
T Maximum(T No1, T No2)
{
    T Ans = 0;

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
    cout<<Maximum(21.5,11.5)<<"\n";
    cout<<Maximum(21,11)<<"\n";

    return 0;
}