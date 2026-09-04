//accept string and count the capital letters from the string 

import java.util.*;

class StringX
{
    public int CountCapital(String str)
    {
        int i = 0,iCount = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] >= 'A' && Arr[i]<= 'Z')
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
        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i]>= 'a' && Arr[i] <='z')
            {
                iCount++;
            }
            
        }
        return iCount;
    }
}


class program272
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
string is immutable 
if we want to edit it, convert it into character array using tocharArray();
then edit that array 
convert it back to string 
then return that string
*/