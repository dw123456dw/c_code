#include "../tcpSocket/tcpSocket.h"



int main()
{
	init_Socket();

	SOCKET serfd = createServerSocket();
	printf("wait client connect...\n");
	//如果有客户端请求链接
	SOCKET clifd = accept(serfd, NULL, NULL);
	if (INVALID_SOCKET ==  clifd) 
	{
		printf("accept faild code %d", WSAGetLastError());
	}

	//可以和客户端进行通信了
	char recvbuf[BUFSIZ] = { 0 };
	char sendbuf[BUFSIZ] = { 0 };
	while (true)
	{
		//从指定的socket接收消息
		if (0 < recv(clifd, recvbuf, BUFSIZ, 0))
		{
			printf("recv :%s\n", recvbuf);
		}

		memset(recvbuf, 0, sizeof(recvbuf));
		memset(sendbuf, 0, sizeof(sendbuf));

		//发送消息
		printf("请输入消息:  ");
		gets_s(sendbuf, BUFSIZ);
		if (SOCKET_ERROR == send(clifd, sendbuf, strlen(sendbuf), 0))
		{
			printf("send faild code %d", WSAGetLastError());
		}
	}

	closesocket(serfd);
	closesocket(clifd);

	close_Socket();
	printf("server-----end-----\n");
	getchar();
	return 0;
}
