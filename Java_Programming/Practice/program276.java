// Error on purpose

import java.util.*;



class program276
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);     //Scanner class object
        String data = null;                         //reference
        program280 strobj = new program280();            // Error 
        int iRet = 0;

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);

        System.out.println("Number of capital characters are : "+iRet);

        iRet = strobj.CountSmall(data);

        System.out.println("Number of small characters are : "+iRet);

        iRet = strobj.CountDigits(data);

        System.out.println("Number of digits are : "+iRet);

        iRet = strobj.CountSpace(data);

        System.out.println("Number of white spaces are : "+iRet);

        iRet = strobj.CountSpecial(data);

        System.out.println("Number of special characters are : "+iRet);
       
    }
}
