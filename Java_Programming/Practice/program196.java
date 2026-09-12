//Check, again solve
//DRAW THE MATRIX FOR INTERVIEW (FROM NB USED FOR DRY RUN and board photo)
// lr : iteration cha iteration but based on user input (Dynamic)
/*
    Input :
    iRow = 4
    iCol = 4
    (Square Matrix)

    Output:

    * * * *
    $ $ $ $
    * * * *
    $ $ $ $


*/

import java.util.*;

class program195
{
    public static void Display(int iRow, int iCol)                  
    {
        int i = 0;
        int j = 0;

        for(i = 1; i <= iRow; i++)
        {
            if(j % 2 == 0)
            {
               System.out.print("#\t"); 
            }
            else
            {
                System.out.print("$\t");

            }
        System.out.println();
       }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        iValue2 = sobj.nextInt();

        Display(iValue1,iValue2);

    }
    
}




