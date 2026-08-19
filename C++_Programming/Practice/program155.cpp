//error on purpose
#include<iostream>
using namespace std;
//chk
#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int x)
        {

        }

};


int main()
{
   // ArrayX aobj;     // error - matching same type cha constructor nahiye

    //cout<<sizeof(aobj)<<endl;   //12
   
   

    return 0;
}