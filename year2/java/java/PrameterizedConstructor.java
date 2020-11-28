class Class1_2
{
    int a;
    Class1_2(int b)
    {
        a=b;
    }
}
class PrameterizedConstructor
{
    public static void main(String args[])
    {
        Class1_2 Object = new Class1_2(20);
        System.out.println("Value : "+Object.a);
    }
}