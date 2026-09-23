// Accept string from user and convert it into Camel case (first letter of every word should be capital)
/*

Input : my name is amit 
Ouput : My Name Is Amit

Input : my NAME is AmIt 
Ouput : My Name Is Amit

*/
import java.util.*;

class program741
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        str = str.toLowerCase();

        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }

    }
}
