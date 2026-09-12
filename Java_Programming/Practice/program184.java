// Input : 7
// Output : A * B * C * D 
// place  : 1 2 3 4 5 6 7
//i.e. value of iCnt
//check again

import java.util.*;

class program184
{
    public static void Display(int iNo)                  
    {
        char ch = '\0';
        int iCnt = 0;
        
        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)    
        {
            if(iCnt % 2 == 0)
            {
                System.out.print("*\t"); 
            }
            else
            {
                System.out.print(ch+"\t");
                ch++;
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

