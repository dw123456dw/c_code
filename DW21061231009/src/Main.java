
//编程题。任务描述:通常人们使用的计算机上都有USB接口,鼠标,键盘等设备都可以通过USB接口连接到计算机中使用。
//        计算机启动时,这些设备也随之启动;计算机关闭时,这些设备也会随之关闭。编写一个程序,模拟描述中的计算机的开机关机过程。
//        思路提示:先定义一个USB接口,在接口中定义好规范(启动,关闭);编写接口的实现类,比如键盘,鼠标类,实现接口的方法;
//        编写计算机类,该类中允许添加USB设备,有开机功能和关机功能,开机时所有的USB设备都启动,关机时所有的USB设备都关闭;
//        编写测试类:实例化计算机类,添加USB设备鼠标、键盘,然后测试开机和关机功能。将程序运行结果截图展示。
//public class Main {
//    public static class USB
//    {
//        void start()
//        {
//            System.out.println("启动");
//        }
//        void close()
//        {
//            System.out.println("关闭");
//        }
//    }
//    public static class keybord extends USB
//    {
//        void start()
//        {
//            System.out.println("键盘启动");
//        }
//        void close()
//        {
//            System.out.println("键盘关闭");
//        }
//    }
//    public static class mouse extends USB
//    {
//        void start()
//        {
//            System.out.println("鼠标启动");
//        }
//        void close()
//        {
//            System.out.println("鼠标关闭");
//        }
//    }
//    public static class computer
//    {
//        USB s1;
//        USB s2;
//        computer(USB u1,USB u2)
//        {
//            this.s1=u1;
//            this.s2=u2;
//        }
//        void start()
//        {
//            System.out.println("电脑开机");
//            s1.start();
//            s2.start();
//        }
//        void close()
//        {
//            s1.close();
//            s2.close();
//            System.out.println("电脑关机");
//        }
//    }
//    public static void main(String[] args) {
//        keybord k=new keybord();
//        mouse m=new mouse();
//        computer c=new computer(k,m);
//        c.start();
//        c.close();
//    }
//}
import java. io. *;
public class Main{
    public static void main(String args[]) {
        char [] a;
        String s="ABCDEF";
        a=new char[3];
        s.getChars(1,4,a,0);
        System.out.printf("%c%c%c",a[0],a[1],a[2]);
    }
}