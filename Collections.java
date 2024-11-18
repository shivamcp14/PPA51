import java.util.*;
import java.util.Iterator;

class Collections
{
    public static void main(String A[])
    {
        LinkedList <Integer> lobj = new LinkList<Integer>();
   
        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        lobj.add(101);

        System.out.println(lobj);

        lobj.addFirst(5);

        System.out.println(lobj);

        Iterator lobj = lobj.iterator();
        while(lobj.hasNext())
        {
            System.out.println(lobj.next());
        }
    }
}