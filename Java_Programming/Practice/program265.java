import java.util.*;

class program265
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;  //this Arr is reference, it is not an Array


        System.out.println("Enter string : ");
        Arr = sobj.nextLine();   
 
        
        System.out.println("Length of string is : "+Arr.length()); 
        
        char str[] = Arr.toCharArray();   //converts it into the character array, earlier it was not an array 

        int i = 0;
        for(i = 0; i < str.length;i++)
        {
            System.out.println(str[i]);  
        }                                
    }
}
