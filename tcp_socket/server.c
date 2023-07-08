#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <sys/socket.h>
#include <ctype.h>
#include <arpa/inet.h>

#define SERV_PORT 9527

int main()
{
	int lfd = 0,cfd = 0;
	lfd=socket(AF_INET,SOCK_STREAM,0);
	int ret,i;
	char buf[BUFSIZ],client_ip[1024];
	struct sockaddr_in serv_addr,clit_addr;
	socklen_t clit_addr_len = sizeof(clit_addr);

	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(SERV_PORT); 
	serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);

	bind(lfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr));
	listen(lfd,128);
	cfd = accept(lfd,(struct sockaddr *)&clit_addr,&clit_addr_len);
	if(cfd==-1)
	{
		perror("accept error");
		exit(1);
	}
	printf("client ip:%s,port:%d\n",
			inet_ntop(AF_INET,&clit_addr.sin_addr.s_addr,client_ip,sizeof(client_ip)),
			ntohs(clit_addr.sin_port));
	while(1)
	{
		ret = read(cfd,buf,sizeof(buf));
		write(STDOUT_FILENO,buf,ret);
		for(i = 0;i < ret; i++)
		{
			buf[i]=toupper(buf[i]);
		}
		write(cfd,buf,ret);
	}
	close(lfd);
	close(cfd);
	return 0;
}
