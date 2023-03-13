#include "tcpSocket.h"

bool init_Socket()
{
	WSADATA wsadata;
	if (0 != WSAStartup(MAKEWORD(2, 2), &wsadata))
	{
		printf("WSAS faild code %d",WSAGetLastError());
		return false;
	}

	return true;
}

bool close_Socket()
{
	if (0 != WSACleanup())
	{
		printf("close faild code %d", WSAGetLastError());
		return false;
	}
	return true;
}

SOCKET createServerSocket()
{
	//1. 创建空的socket
	//三个参数
	//1.地址协议族
	//2.传输协议类型
	//3.使用某个具体的传输协议
	SOCKET fd = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	if (fd ==INVALID_SOCKET)
	{
		printf("socket faild code %d", WSAGetLastError());
		return INVALID_SOCKET;
	}
	//2,给socket绑定ip地址和端口号
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;  //和创建socket时一样
	addr.sin_port = htons(PORT);
	addr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");

	if (SOCKET_ERROR == bind(fd, &addr, sizeof(addr)))
	{
		printf("bind faild code %d", WSAGetLastError());
		return false;
	}
	//3.监听电话
	listen(fd,10);

	return fd;
}

SOCKET createClientSocket(const char* ip)
{
	//1. 创建空的socket
	//三个参数
	//1.地址协议族
	//2.传输协议类型
	//3.使用某个具体的传输协议
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd == INVALID_SOCKET)
	{
		printf("socket faild code %d", WSAGetLastError());
		return INVALID_SOCKET;
	}
	//2,与服务器建立连接
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;  //和创建socket时一样
	addr.sin_port = htons(PORT);
	addr.sin_addr.S_un.S_addr = inet_addr(ip);

	if (INVALID_SOCKET == connect(fd, (struct socket*)&addr, sizeof(addr)))
	{
		printf("connect faild code %d", WSAGetLastError());
		return false;
	}

	return fd;
}
