/*
    1. Constructors are used to intialize objects of its class.
    2. Constructors takes same name from class.
    3. Construcotrs don't have any return type and void,it can't return any value.
    4. Construcotrs are not virtual.
    5. There  are 2 types in constructors :
            5.1 Default constructor.
            5.2 Parameterized Constructor.
                5.2.1 Explicit Constructor Calling.
                5.2.2 Implicit Constructor Calling.
*/
class Class1_1 {
    int a;

    Class1_1() // default constructor.
    {
        a = 2;
    }
    void display()
    {
        System.out.println("Value : "+a);
    }
}

class DefaultConstructors {
    public static void main(String args[])
    {
        Class1_1 object = new Class1_1();
        object.display();
    }
}
