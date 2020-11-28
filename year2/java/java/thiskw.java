/*
    1."This" Keyword is used create reference to an object.
    2."This" Keyword passed Implicitly.

*/
class c1{
    int variable1;
    String string1;
    c1(int variable1,String string1) //c1 is constructer.
    {
        this.variable1=variable1; //here we're referencing same objects.
        this.string1=string1;
    }
    void display()
    {
        System.out.println("DataMember are : "+variable1+" "+string1);
    }
}
public class thiskw {
    public static void main(String args[])
    {
        c1 o1 = new c1(1,"Karthik"); //here c1 = class1 o1 = object 1
        c1 o2 = new c1(2,"Karthik");
        o1.display();
        o2.display();
    }
    
}
