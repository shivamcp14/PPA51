class Base
{
    public int A, B;

    public Base()
    {
        System.out.println("Inside Base constructor");
    }

    public void Fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base
{
    public int X, Y;

    public Derived()
    {
        System.out.println("Inside Derived constructor");
    }

    public void Gun()
    {
        System.out.println("Inside Derived Gun");
    }
}

class Derivedx extends Base
{
    public int P, Q;

    public Derivedx()
    {
        System.out.println("Inside DerivedX constructor");
    }

    public void Sun()
    {
        System.out.println("Inside DerivedX Sun");
    }
}

class Hirarchical
{
    public static void main(String A[])
    {
        System.out.println("Inside main method");

        
        Derived dobj1 = new Derived();
        dobj1.Fun();
        dobj1.Gun();

        
        Derivedx dobj2 = new Derivedx();
        dobj2.Fun();
        dobj2.Sun();
    }
}
