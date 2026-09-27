/*
Accept string from user and display frequency of each element

*/

import java.util.*;

class program773
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        HashMap <Character, Integer> hobj = new HashMap<Character, Integer>();

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        int iCount = 0;

        // this is for each loop 
        for(char ch : Arr)
        {
            if(hobj.containsKey(ch) == true)
            {
                iCount = hobj.get(ch);
                hobj.put(ch, iCount+1);
            }
            else
            {
                hobj.put(ch, 1);
            }
        }

        System.out.println(hobj);
        
    }
}
