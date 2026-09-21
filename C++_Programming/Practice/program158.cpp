#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int X)
        {
            cout<<"Inside Constructor \n";

            iSize = X;                  
            Arr = new int [iSize];     

        }

        //Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor \n";
            delete []Arr;    //Resource Deallocation
        }
};

int main()
{
    
    ArrayX aobj1(5);     
 
    return 0;
}
