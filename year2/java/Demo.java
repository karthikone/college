class person
{
    String name;
    int age;
    person()
    {
        name = "Karthik";
        age = 20;
    }
    void talk()
    {
        System.out.println("Hello I'm "+name);
        System.out.println("My age is :  "+age);
    }
}
class Demo
{
    public static void main(String args[])
    {
        person Karthik = new person();
        Karthik.talk();
    }
}