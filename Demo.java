class Marvellous
{
    public int A;
    protected float B;
    private int c;

    public Marvellous()
    {
        A=10;
        B=10.10f;
        c=20;
    }
    void Display()
    {
        int i=11;
        System.out.println("value if i is : "+i);
    }
}

class Demo
{
    public static void main(String A[])
    {
        Marvellous mobj=new Marvellous();
        mobj.Display();
    }
}
