
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

    public int CountDigits(String str)
    {
        int i = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i]>= '0' && Arr[i] <='9')
            {
                iCount++;
            }
            
        }
        return iCount;
    }

    public int CountSpace(String str)
    {
        int i = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] == ' ')
            {
                iCount++;
            }
            
        }
        return iCount;
    }
    public int CountSpecial(String str)
    {
        int i = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            if( (Arr[i] >= '!' && Arr[i] <= '/')||    //this || says kii if cha first() kiva second()khalchi line kiva parat khalchi line i.e. the condition written in those 4()brackets
                (Arr[i] >= ':' && Arr[i] <= '@')|| 
                (Arr[i] >= '[' && Arr[i] <= '`')||
                (Arr[i] >= '{' && Arr[i] <= '~'))
            {
                iCount++;
            }
            
        }
        return iCount;
    }
    
}


class program275
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
/*
interview madhe special symbols sathi tyachi ascii values vicharu shakto apan

hee varti lihilele functions are readable, easy to unnderstand
usually ppl use RegX i.e regular expressions but same can be achieved into without using it
so tell the readability reason as justification for using it

*/