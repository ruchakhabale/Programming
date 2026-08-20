#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        //Paramterised constructor
        ArrayX(int X)
        {
            cout<<"Inside Constructor \n";

            iSize = X;                  //Characteristics initialisation
            Arr = new int [iSize];      //Resource allocation (here, Array is resource) 

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
    //Static memory allocation for object 
    //ArrayX aobj1(5);     
 
    ArrayX * aobj = new ArrayX(5);
   
    return 0;
}