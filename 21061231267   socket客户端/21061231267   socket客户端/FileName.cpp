#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <winsock2.h>

#pragma comment(lib, "ws2_32.lib")

int main()
{
    WSADATA wsaData;
    SOCKET clientSock;
    struct sockaddr_in serverAddr;
    char buf[1024];

    // 初始化Winsock库
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        printf("初始化失败.\n");
        return -1;
    }

    // 创建Socket
    clientSock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (clientSock == INVALID_SOCKET)
    {
        printf("socket创建失败\n");
        WSACleanup();
        return -1;
    }

    // 设置Socket的地址和端口
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr("10.128.102.254");  // 服务器IP地址
    serverAddr.sin_port = htons(12345);

    // 连接服务器
    if (connect(clientSock, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
    {
        printf("连接失败.\n");
        closesocket(clientSock);
        WSACleanup();
        return -1;
    }

    printf("正在连接到服务器.\n");

    // 发送数据到服务器
    const char* msg = "Hello, 服务器!";
    send(clientSock, msg, strlen(msg), 0);

    // 接收服务器响应
    int len = recv(clientSock, buf, sizeof(buf), 0);
    if (len > 0)
    {
        buf[len] = '\0';
        printf("Receive: %s\n", buf);
    }

    // 关闭Socket
    closesocket(clientSock);
    WSACleanup();

    return 0;
}