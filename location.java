public class location
{    
    public static void main(String args[])
    {
        char chinaword= '好';
        char you = '\u4f60';
        int position= 20320;    
        System.out.println("汉字:"+chinaword+"的位置:"+(int)chinaword);
        System.out.println(position+"位置上的字符是:"+(char)position);
        position = 21319;
        System.out.println(position+"位置上的字符是:"+(char)position);
        System.out.println("you:"+you);
    } 
}