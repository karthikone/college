interface shape
{
    public static final double pi = 3.14;
    public abstract void Compute(double x, double y);
}
class Circle implements shape
{
    public double compute(double x,double y)
        {
            return(pi*x*y);
        }
        @Override
        public void Compute(double x, double y) {}
}
class testinterface
{
    public static void main(String[] args)
    {
        Circle c = new Circle();
        System.out.println(c.compute(20.5,10.0));
    }
}

