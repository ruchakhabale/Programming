#include<iostream>
using namespace std;
//chk
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

        
        ~ArrayX()
        {
            cout<<"Inside Destructor \n";
            delete []Arr;    
        }

};

int main()
{
    ArrayX * aobj = new ArrayX(5);
   
    delete aobj;
    cout<<"End of main\n";
    
    return 0;
}
