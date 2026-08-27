import java.util.*;

class program260
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;  //this Arr is reference of class String, it is not an Array


        System.out.println("Enter string : ");
        Arr = sobj.nextLine();   //nextLine() due to string 
 
        System.out.println("Entered string : "+Arr);
    }
}
