public class Main {
    public static int add(int x,int y)
    {
        try
        {
            return x/y;
        }catch (Exception ex)
        {
            System.out.println("请注意不能用0做除数");
            return -1;
        }
    }
    public static void main(String[] args) {
        int a=10;
        int b=0;
        int ret=add(a,b);
        System.out.println(ret);
    }
}