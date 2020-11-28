/*
    Using same method with diffrent diffrent parameters and defination
*/
class Class1{
    static int ChanginNoOfArguments(int a,int b)
    {
        return a+b;
    }
    static int ChanginNoOfArguments(int a,int b,int c)
    {
        return a+b+c;
    }
    static int ChangInDataType(int a,int b)
    {
        return a+b;
    }
    static double ChangInDataType(double a,double b)
    {
        return a+b;
    }
}
class overloading
{    public static void main(String args[])
    {
        System.out.println(Class1.ChanginNoOfArguments(1,2));
        System.out.println(Class1.ChanginNoOfArguments(3, 4, 5));
        System.out.println(Class1.ChangInDataType(6, 7));
        System.out.println(Class1.ChangInDataType(7.5,8.0));
    }
}
