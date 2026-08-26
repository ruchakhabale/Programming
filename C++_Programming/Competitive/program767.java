/*
Accept string from user and display frequency of each element

*/

import java.util.*;

class program767
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        Hashtable <Character, Integer> hobj = new Hashtable<Character, Integer>();

        hobj.put('a', 1);
        hobj.put('b', 1);
        hobj.put('a', 2);
        hobj.put('b', 2);

        System.out.println(hobj);
    }
}

/*

Hashmap - non synchronized fast, it allows 1 null key and multiple values prefferable for Multithreading
Hashtable - synchronized slow due to lock overhead



*/
