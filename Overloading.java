class Arithmatic
{

    public int Addition (int A,int B)
    {
        return A+B;
    }
    public int Addition(int A,int B,int C)
    {
        return A+B+C;
    }
    public float Addition (float A,float B)
    {
        return A+B;
    }
}
class Overloading
{
    public static void main(String Arg[])
    {
        Arithmatic aobj=new Arithmatic();
        System.out.println(aobj.Addition(10,11));
        System.out.println(aobj.Addition(10,11,21));
       System.out.println(aobj.Addition(10.5f,11.2f));
    }
}