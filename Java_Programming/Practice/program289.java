// accept input from user and update to toggle
//rechk not done any changes in this !!!! redo
import java.util.*;

class StringX
{
    public String Toggle(String str)
    {
        int i = 0;

        char Arr[] = str.toCharArray();

        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] == 'a' || Arr[i] == 'z')
            {
                Arr[i] = (char)(Arr[i] - 32);   
            }
            else if(Arr[i] == 'a' || Arr[i] == 'z')
            {
                
            }
        }
        return new String(Arr); //he directly new string banavun return karta, refere 278 for reference, preferably use this 
    }
}

class program289
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);     
        String data = null;                         
        StringX strobj = new StringX();   
        String sRet = null;        
        

        System.out.println("Enter String : ");
        data = sobj.nextLine();

        sRet = strobj.Toggle(data);

        System.out.println("Updated string is : "+sRet);
       
       
    }
}




