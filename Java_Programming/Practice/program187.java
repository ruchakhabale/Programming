// Input : 7
// Output : A b C d E f G  
// place  : 1 2 3 4 5 6 7
//i.e. value of iCnt
// chck didnt show expected op 

import java.util.*;

class program187
{
    public static void Display(int iNo)                  
    {
        
        int iCnt = 0;
        char ch1 = '\0';
        char ch2 = '\0';
        
        for(iCnt = 1, ch1 = 'A', ch2 = 'a'; iCnt <= iNo; iCnt++, ch1++, ch2++)    
        {
            if(iCnt % 2 == 0)
            {
                ch2 = 'a';
                System.out.print(ch2+"\t"); 
                
            }
            else
            {
                System.out.print(ch1+"\t"); 
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


