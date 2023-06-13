#include <stdio.h>
#include "mymath.h"
int main()
{
    int a=10,b=10;
    printf("%d+%d=%d\n",a,b,add(a,b));
    printf("%d+%d=%d\n",a,b,sub(a,b));
    printf("%d+%d=%d\n",a,b,div1(a,b));

    return 0;
}
