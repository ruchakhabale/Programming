#include<iostream>
using namespace std;
//CHK, check for errors, (related to spring boot, refer again after learning) 
#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        // Paramterised constructor with default argument :  it will work as default constr as well as parameterised both.    
        ArrayX(int X = 5)  //kahi value deli nahi tar tyala by deafult 5 consider karto
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

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the elements : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }

        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of the array are : \n";

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }

        }
};

int main()
{    
 
    ArrayX * aobj = NULL;

    int iLength = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();

    
    delete aobj;
     
    return 0;
}
