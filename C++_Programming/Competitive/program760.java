
/*
(Collections begin from here)

Accpet 2 strings from user and check whether the string are anagram are not 
str 1 : hello india
str 2 : loinhdiael

*/

import java.util.*;

class program756
{
    
    public static void main(String A[])
    {
        public boolean CheckAnagram(String str1, String str2)
        {
            return true;
        }
        
        int i = 0;

        if(str1.length() != str2.length())
        {
            return false;
        }

        str1 = str1.trim();
        str1 = str1.replaceAll("\\s+"," ");
        str1 = str1.toLowerCase();
        char Arr[] = str1.toCharArray();
         

        str2 = str2.trim();
        str2 = str2.replaceAll("\\s+"," ");
        str2 = str2.toLowerCase();
        char Brr[] = str1.toCharArray();
        int Frequency[] = new int[26]; 

        

        for(i = 0; i < Arr.length; i++)    // Arr is character array 
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Frequency[(int)Arr[i] - 97]++;
            }

            if(Brr[i] >= 'a' && Brr[i] <= 'z')
            {
                Frequency[(int)Brr[i] - 97]--;
            }
        }

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

