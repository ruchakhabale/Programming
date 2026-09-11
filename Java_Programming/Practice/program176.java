// Input : 7
// Output : 1 * 3 * 5 * 7
// place  : 1 2 3 4 5 6 7
//i.e. value of iCnt

import java.util.*;

class program176
{
    public static void Display(int iNo)                  
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)    
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("*\t");
            }
            else
            {
                System.out.print(iCnt+"\t");
            }
            
        }
        System.out.println();
 
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number of elements : ");
        iValue = sobj.nextInt();

        Display(iValue);

    }
    
}
