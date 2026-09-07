import java.util.*;

class StringX
{
    public void Display(String str)  s
    {
        System.out.println("Received string is : "+str);
        
    }
}


class program268
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);                
        String str = null;                                    
        program280 strobj = new program280();                 

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        strobj.Display(str);
       
    }
}
