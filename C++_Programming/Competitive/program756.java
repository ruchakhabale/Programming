/*
cross chk op 
(Collections begin from here)

Accpet 2 strings from user and check whether the string are anagram are not 
str 1 : hello india
str 2 : loinhdiael

*/

import java.util.*;

class program756
{
    public static boolean CheckAnagram(String str1, String str2)
    {
        return true;
    }
    
    public static void main(String A[])
    {
        int i = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first String : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter second String : ");
        String str2 = sobj.nextLine();

        boolean bRet = false;

        bRet = CheckAnagram(str1, str2);

        if(bRet == true)
        {
            System.out.println("Strings are Anagram");
        }
        else
        {
            System.out.println("Strings are not Anagram");
        }

       
    }
}

