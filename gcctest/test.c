#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int a=10,b=10;
    int i;
    for(i=0;i<20;i++)
    {
         printf("a+b=%d",add(i,i+1));
    }
    return 0;
}

