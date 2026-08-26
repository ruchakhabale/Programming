/*
Accept string from user and display frequency of each element

*/

import java.util.*;

class program764
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        HashMap <Character, Integer> hobj = new HashMap<Character, Integer>();

        hobj.put('a', 1);
        hobj.put('b', 1);
        hobj.put('c', 1);
        hobj.put('d', 1);

        System.out.println(hobj);
    }
}



/*

Hashmap is like Dict in python, of Java, (Key value pairs type)

<Character, Integer> <key, value>
duplicate key is not allowed

Duplicate value gets overriden

put() method is used to insert

*/