/*
(Collections begin from here)

Accpet string from user and display the frequency of the maxmimu displayed letter

*/

import java.util.*;

class program755
{
    public static void main(String A[])
    {
        int i = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        str = str.toLowerCase();

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

        int iMax = 0;
        char ch = '\0';

        for(i = 0; i < Frequency.length; i++)
        {
            if(Frequency[i] > iMax )
            {
                iMax = Frequency[i];
                ch = (char) (i + 97);
            }
        }

        System.out.println("Maximum occured character is : "+ch+" : "+" with frequency : "+iMax);
    }
}
