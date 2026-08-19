#include<iostream>
using namespace std;
//chk
#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        

        //Paramtericsed constructor
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
    
    ArrayX aobj1(5);     
 
   
    return 0;
}