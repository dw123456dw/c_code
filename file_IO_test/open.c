#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd;
    fd = open("./test.c",O_RDONLY | O_CREAT,0644);
    printf("fd = %d\n",fd);
    close(fd);
    
    return 0;
}



