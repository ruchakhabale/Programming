#include<iostream>
using namespace std;
//chk
#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //Default Constructor
        ArrayX()
        {

        }

        //Paramtericsed constructor
        ArrayX(int x)
        {

        }

};


int main()
{
    ArrayX aobj1;    //calls defualt constructo
    ArrayX aobj2(5);     //calls parameterized 

    cout<<sizeof(aobj1)<<endl;   //12 bytes
    cout<<sizeof(aobj2)<<endl;
   
   

    return 0;
}