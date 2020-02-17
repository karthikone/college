class Threads extends Thread
{
    public void run()
    {
        for(i=0;i<10000;i++)
        {
            System.out.println(i);
        }
    }
}
class Demo{
    public  static void main(string args[]) {
        Threads obj = new Threads();
        Thread t = new Thread(obj);
        t.start();
    }
}