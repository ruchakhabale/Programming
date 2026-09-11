// Input : 7
// Output : a b c d e f g 
// place  : 1 2 3 4 5 6 7
//i.e. value of iCnt
//diff in lr: value of character variable is set with its default value first and then used inside the for loop 

 
import java.util.*;

class program180
{
    public static void Display(int iNo)                  
    {
        char ch = '\0';
        int iCnt = 0;
        
        for(iCnt = 1, ch = 'a'; iCnt <= iNo; iCnt++, ch++)    
        {
            System.out.print(ch+"\t"); 
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

