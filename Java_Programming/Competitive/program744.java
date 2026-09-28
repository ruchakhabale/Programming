import java.util.*;

class program744
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        StringBuffer sb = new StringBuffer(str);        // Convert string to stringbuffer, so that we can use the reverse in-built method 

        System.out.println(sb.reverse());
    }
}