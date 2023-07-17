#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define SERV_PORT 9527

int main()
{
	int sockfd;
	int count = 10;
	int ret;
	char buf[BUFSIZ];
	struct sockaddr_in serv_addr;       //服务器的地址结构	
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_port = htons(SERV_PORT);
	inet_pton(AF_INET,"127.0.0.1",&serv_addr.sin_addr.s_addr);   //写死
	
	sockfd = socket(AF_INET,SOCK_DGRAM,0);	
	
	//connect(cfd,(struct sockaddr *)&serv_addr,sizeof(serv_addr));
	
	while(--count)
	{
		fgets(buf,sizeof(buf),stdin);
		sendto(sockfd,buf,strlen(buf),0,(struct sockaddr *)&serv_addr,sizeof(serv_addr));
		
		ret = recvfrom(sockfd,buf,sizeof(buf),0,NULL,0);
		write(STDOUT_FILENO,buf,ret);
	}
	close(sockfd);
	return 0;
}
