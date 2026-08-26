/*
(Collections begin from here)

Accpet string from user and display the frequency of each letter

*/

import java.util.*;

class program752
{
    public static void main(String A[])
    {
        int i = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        char Arr[] = str.toCharArray();

        int Frequency[] = new int[26]; 

        //  a   b   c   d 
        // 97  98  99  100
        // 0    1   2   3    (indexes in Frequency array )

        for(i = 0; i < Arr.length; i++)    // Arr is character array 
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Frequency[(int)Arr[i] - 97]++;
            }
        }

        System.out.println("Frequency of each letter is : ");

        for(i = 0; i < Frequency.length; i++)
        {
            System.out.println(Frequency[i]);
        }
    }
}

