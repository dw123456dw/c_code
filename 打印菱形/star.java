public class star
{
    public static void main(String args[])
    {
        int n=10;
        for(int i=1;i<=n;i++)
        {
                for(int k=1;k<n-i;k++)
                {
                    System.out.println( );
                }
               for(int j=1;j<=2*i-1;j++)
               {
	         System.out.println("* ");
               }
        }
    }
}