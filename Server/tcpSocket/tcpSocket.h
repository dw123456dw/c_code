#ifndef _TCPSOCKET_H_
#define _TCPSOCKET_H_
#include <Winsock2.h>					//windows网络库头文件
#pragma comment(lib,"ws2_32.lib")       //库文件
#include <stdbool.h>
#include <stdio.h>
#define	 PORT 8888	
#include <WinSock2.h>

//打开网络库
bool init_Socket();

//关闭网络库
bool close_Socket();
//创建服务器
SOCKET createServerSocket(); 


SOCKET createClientSocket(const char* ip);


#endif // !_TCPSOCKET_H_
