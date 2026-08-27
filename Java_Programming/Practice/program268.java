import java.util.*;

class StringX
{
    public void Display(String str)  // haa StringX cha str aahe can use the same name as str from main as they are into diff classes
    {
        System.out.println("Received string is : "+str);
        
    }
}


class program268
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);           //Scanner class object
        String str = null;    //haa main cha str aahe    //reference
        program280 strobj = new program280();                  //object of StringX class

        System.out.println("Enter String : ");
        str = sobj.nextLine();

        strobj.Display(str);
       
    }
}
