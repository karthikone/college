
class Parent
{
    String ParentName = "NageswaraRao";
}
class Child extends Parent 
{
    String ChildName = "Karthik";
    void display()
    {
        System.out.println("ChildName : "+ChildName+" ParentName : "+ParentName);
    }
}
class inheritence
{
    public static void main(String args[])
    {
        Child ChildNameWithParentName = new Child();
        ChildNameWithParentName.display();
    }
}
