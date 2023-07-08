#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define SERV_PORT 8848

int main()
{
	int cfd;
	int count = 10;
	int ret;
	char buf[BUFSIZ];
	struct sockaddr_in serv_addr;       //服务器的地址结构	
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(SERV_PORT);
	inet_pton(AF_INET,"152.136.48.87",&serv_addr.sin_addr.s_addr);
	
	cfd = socket(AF_INET,SOCK_STREAM,0);	
	
	connect(cfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr));
	
	while(--count)
	{
		write(cfd,"hello,from dw's server\n",sizeof("hello,from dw's server\n"));
		ret = read(cfd,buf,sizeof(buf));
		write(STDOUT_FILENO,buf,ret);
	}
	close(cfd);
	return 0;
}
