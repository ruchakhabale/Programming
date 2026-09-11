#include<iostream>
using namespace std;
//chk, related to spring boot, refer again after learning 
#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX()
        {
            iSize = 5;         //default value deli aahe ethe 5 ashi, it can be anything as per need             
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
 
    ArrayX * aobj1 = new ArrayX();   //Default constructor 
    ArrayX * aobj2 = new ArrayX(5);  //Parameterised constructor

    // Function call
   
    delete aobj1;   //call for same as only one destructoR 
    delete aobj2;
     
    return 0;
}
