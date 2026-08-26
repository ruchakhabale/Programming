/*
Accept string from user and display frequency of each element

*/

import java.util.*;

class program772
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        // this is for each loop 
        for(char ch : Arr)
        {
            System.out.println(ch);
        }
        
    }
}

/*

Interview que 100% diff bet for and for each loop 

as per keyword startegy - its for loop
as per implementation - its for each loop

*/
