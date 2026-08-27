import java.util.*;

class program261
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String Arr = null;  //this Arr is reference, it is not an Array


        System.out.println("Enter string : ");
        Arr = sobj.nextLine();   
 
        // Error as it doesnt get treated as an array so cant be accessed using index, in c it used to get treated as character array 
        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
    }
}

