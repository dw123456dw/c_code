import java.util.*;
import java.util.ArrayList;

public class Main {
    public static ArrayList<String> sets=new ArrayList<String>();

    public static void main(String[] args) {
        char A='A',B='B',C='C';
        move(A,B,C,8);
    }
    public static void move(char A,char B,char C,int n)
    {
        if(n==1)
        {
            System.out.println(A+"->"+C);
            sets.add(A+"->"+C);
        }
        else
        {
            move(A,C,B,n-1);
            System.out.println(A+"->"+C);
            sets.add(A+"->"+C);
            move(B,A,C,n-1);
        }
    }
}