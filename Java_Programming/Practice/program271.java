//accept string and count the capital letters from the string 

import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        int i = 0,iCount = 0;
        for(i = 0; i<str.length(); i++)
        {
            if(str.charAt(i) >= 'A' && str.charAt(i)<= 'Z')
            {
                iCount++;

            }
           
        }
         return iCount;
    }

    public int CountSmall(String str)
    {
        int i = 0;
        int iCount = 0;
        for(i = 0; i<str.length(); i++)
        {
            if(str.charAt(i)>= 'a' && str.charAt(i) <='z')
            {
                iCount++;
            }
            
        }
        return iCount;
    }
}


class program271
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);     //Scanner class object
        String data = null;                         //reference
        StringX strobj = new StringX();            //object of StringX class
        int iRet = 0;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Number of capital characters : "+iRet);

        iRet = strobj.CountSmall(data);

        System.out.println("Number of small characters : "+iRet);
       
    }
}

/*
String sathi str.length();
Array sathi   Arr.length;


*/
