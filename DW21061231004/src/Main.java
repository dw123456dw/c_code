public class Main {
    public static class people
    {
        String m_Name;
        int m_Age;
        int m_Money;
        void eat(String food)
        {
            System.out.println("吃"+food);
        }
        void drink(String water)
        {
            System.out.println("喝"+water);
        }
    }
    public static class bike
    {
        String m_Name;
        String m_GONGSI;
        void run() {
            System.out.println("骑车");
        }
    }

    public static class cat
    {
        String m_Name;
        int m_Age;
        char maose;
        String pingzhong;

        void sleep()
        {
            System.out.println("睡觉呢");
        }
        void goto_wc()
        {
            System.out.println("上厕所");
        }
    }

    public static class leader
    {
        String m_Name;
        int m_Age;
        char sex;
        void drawbin()
        {
            System.out.println("画大饼");
        }
        void kougongzi(int money)
        {
            System.out.println("扣你"+money+"块钱");
        }
    }

    public static class dancer
    {
        String m_Name;
        int m_Age;
        char sex;
        String kindofdance;
        void tiaowu(String name)
        {
            System.out.println("再跳"+name);
        }
    }
    public static void main(String[] args) {
        people p1;
        p1=new people();
        p1.eat("苹果");
        p1.drink("冰红茶");

        bike b=new bike();
        b.run();

        cat c=new cat();
        c.sleep();
        c.goto_wc();

        leader l=new leader();
        l.drawbin();
        l.kougongzi(500);

        dancer d=new dancer();
        d.tiaowu("拉丁舞");


    }






}