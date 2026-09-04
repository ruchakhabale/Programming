/* this is StringX
upload such a custom library on GitHub
by creating a separate folder named as libraries 
chckk not executed
*/

package Marvellous;


public class program280
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
