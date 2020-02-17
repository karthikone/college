class Threads extends Thread
{
    public void run()
    {
        for(int i=0;i<10000;i++)
        {
            System.out.println(i);
        }
    }
}
class Demo{
    public  static void main(String args[]) {
        Threads obj = new Threads();
        Thread t = new Thread(obj);
        t.start();
    }
}