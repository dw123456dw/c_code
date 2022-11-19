class backhome extends Thread{    //线程类
    public void run()
    {
        while(true)
        {
            System.out.println("回家");
        }
    }
}
class nobackhome extends Thread{
    public void run()
    {
        while(true)
        {
          System.out.println("在校");
        }
    }
}
class saleThread implements Runnable
{
    int ticket=100;
    public void run()
    {
        while(ticket>0)
        {
            sale();
            try {
                Thread.sleep(1);
            }catch (Exception ex){}
        }
    }
    public synchronized void sale()
    {
        if(ticket>0)
        {
            System.out.println(Thread.currentThread()+"卖出去了第"+ticket--);
        }
    }
}

public class Main {
    public static void main(String[] args)
    {
//        backhome b=new backhome();   //继承
//        nobackhome n=new nobackhome();
//        b.start();
//        n.start();
        saleThread s=new saleThread();    //共享资源
        Thread t1=new Thread(s);          //四个进程共享一个资源
        Thread t2=new Thread(s);
        Thread t3=new Thread(s);
        Thread t4=new Thread(s);

        t1.start();    //启动进程
        t2.start();
        t3.start();
        t4.start();
    }
}