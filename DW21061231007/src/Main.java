public class Main {
    public static class Vehivle
    {
        String m_name;
        String m_brand;
        String m_color;
        int m_number;
        Vehivle()
        {
            ;
        }

        Vehivle(String name,String brand,String color,int number)
        {
            m_name=name;
            m_brand=brand;
            m_color=color;
            m_number=number;
        }

        void set(String name,String brand,String color,int number)
        {
            m_name=name;
            m_brand=brand;
            m_color=color;
            m_number=number;
        }
        String getname()
        {
            return m_name;
        }
        String getbrand()
        {
            return m_brand;
        }
        String getcolor()
        {
            return m_color;
        }
        int getnumber()
        {
            return m_number;
        }
        void accelerate()
        {
            System.out.println("正在加速");
        }
        void decelerate()
        {
            System.out.println("正在减速");
        }
        void move()
        {
            System.out.println("正在移动");
        }
        void stop()
        {
            System.out.println("正在停止");
        }
        void print()
        {
            System.out.println(m_name);
            System.out.println(m_brand);
            System.out.println(m_color);
            System.out.println(m_number);
        }
    }
    public static class Test extends Vehivle
    {
        int m_speed;

        Test(String name,String brand,String color,int number,int speed)
        {
            m_name=name;
            m_brand=brand;
            m_color=color;
            m_number=number;
            m_speed=speed;
        }

        void set(String name,String brand,String color,int number,int speed)
        {
            m_name=name;
            m_brand=brand;
            m_color=color;
            m_number=number;
            m_speed=speed;
        }
        String getname()
        {
            return this.m_name;
        }
        String getbrand()
        {
            return this.m_brand;
        }
        String getcolor()
        {
            return this.m_color;
        }
        int getnumber()
        {
            return this.m_number;
        }
        int getspeed()
        {
            return this.m_speed;
        }
        void move()
        {
            System.out.println("重写的move");
        }
        void stop()
        {
            System.out.println("重写的stop");
        }
        void print()
        {
            System.out.println(m_name);
            System.out.println(m_brand);
            System.out.println(m_color);
            System.out.println(m_number);
            System.out.println(m_speed);
        }
    }
    class Student
    {
        int m_ID;
        String m_name;
        int m_score;

        void setRecord(int id,String name,int score)
        {
            m_ID=id;
            m_score=score;
            m_name=name;
        }
        int getRecord(int id)
        {
            return m_score;
        }
    }
    public static void main(String[] args) {
        Vehivle v=new Vehivle();
        v.set("轿车","红旗","黑色",2);
        v.print();
        v.move();
        v.stop();

        Test t=new Test("卡车","大气","蓝色",1,50);
        t.print();
        t.move();
        t.stop();

    }
}