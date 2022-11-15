import  java.util.*;
import  java.io.*;

public class Main {
    public static void main(String[] args) {
        File c=new File("d:\\");
        scanDir(c);

    }
    public static void scanDir(File x)
    {
        File[] files=x.listFiles();
        if(files==null)
        {
            return;
        }
        for(File y:files)
        {
            if(y.isFile())
            {
                System.out.println(x.getAbsolutePath());
            }
            else if(y.isDirectory())
            {
                scanDir(y);
            }
        }
    }
}