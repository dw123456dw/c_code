#include "../tcpSocket/tcpSocket.h"




int main()
{
	init_Socket();
	
	SOCKET fd = createClientSocket("127.0.0.1");

	char recvbuf[BUFSIZ] = { 0 };
	char sendbuf[BUFSIZ] = { 0 };

	while (true)
	{
		//发送消息
		printf("请输入消息: ");
		gets_s(sendbuf, BUFSIZ);
		if (SOCKET_ERROR == send(fd, sendbuf, strlen(sendbuf), 0))
		{
			printf("send faild code %d", WSAGetLastError());
		}

		//从指定的socket接收消息
		if (0 < recv(fd, recvbuf, BUFSIZ, 0))
		{
			printf("recv :%s\n", recvbuf);
			memset(recvbuf, 0, sizeof(recvbuf));
			memset(sendbuf,0,sizeof(sendbuf));
		}
	}


	closesocket(fd);
	close_Socket();

	printf("client-----end-----\n");

	getchar();
	return 0;
}