// Input : 7
// Output : a b c d e f g 
// place  : 1 2 3 4 5 6 7
//i.e. value of iCnt
//never use ASCII key value in codes
 
import java.util.*;

class program179
{
    public static void Display(int iNo)                  
    {
        char ch = 'a';
        int iCnt = 0;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)    
        {
            System.out.print(ch+"\t");
            ch++;   
            
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

          
