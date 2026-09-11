import java.util.*;

class program171 
{
    public static void Display(int iNo)                  //static bcoz we can directly call it from main func directly without its obj creation
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)    //fakt Array traversal la iCnt = 0 thevycha otherwise keep it iCNt = 1 ALWAYS
        {
            System.out.println("*\t");

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
