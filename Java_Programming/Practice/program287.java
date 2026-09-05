// accept input from user and update to lowercase
//rechk not done any changes in this redo
import java.util.*;

class StringX
{
    public String toLower(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] == 'A' || Arr[i] == 'a')
            {
                Arr[i] = (char)(Arr[i] - 32);   
            }
        }
        return new String(Arr); //he directly new string banavun return karta, refere 278 for reference, preferably use this 
    }
}

class program287
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);     
        String data = null;                         
        StringX strobj = new StringX();   
        String sRet = null;        
        

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        sRet = strobj.toLower(data);

        System.out.println("Updated string is : "+sRet);
       
       
    }
}


