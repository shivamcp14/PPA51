import java.util.*;

class Collections1
{
    public static void main(String A[])
    {
        Stack <String> sobj =new Stack<String>();

        sobj. push("C programming");
        sobj. push("C++ programming");
        sobj. push("java programming");
        sobj. push("python programming");

        System.out.println(sobj);

        String ret = sobj.pop();

        System.out.println(ret);

        System.out.println(sobj);
        
    }
    }
