#include<iostream>
using namespace std;
//CHK, check for errors 
#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:   
        ArrayX(int X = 5)  
        {
            iSize = X;                 
            Arr = new int [iSize];      
        }

         ArrayX(int X)
        {
            iSize = X;                  
            Arr = new int [iSize];      
        }

        //Destructor
        ~ArrayX()
        {
            
            delete []Arr;   
        }

};

int main()
{    
 
    ArrayX * aobj1 = new ArrayX();   //Parameterised constructor 
    ArrayX * aobj2 = new ArrayX(5);  //Parameterised constructor

    // Function call
   
    delete aobj1;   //call for same as only one destructoR 
    delete aobj2;
     
    return 0;
}
