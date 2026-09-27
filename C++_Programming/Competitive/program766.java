/*
Accept string from user and display frequency of each element

*/

import java.util.*;

class program766
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        HashMap <Character, Integer> hobj = new HashMap<Character, Integer>();

        hobj.put('a', 1);
        hobj.put('b', 1);
        hobj.put('a', 2);
        hobj.put('b', 2);

        System.out.println(hobj);
    }
}

/*
100% interview que their difference
and collections topic as well

Hashmap - non synchronized fast, it allows 1 null key and multiple values
Hashtable - synchronized slow due to lock overhead

*/
