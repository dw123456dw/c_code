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

    // ��ʼ��Winsock��
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        printf("��ʼ��ʧ��.\n");
        return -1;
    }

    // ����Socket
    clientSock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (clientSock == INVALID_SOCKET)
    {
        printf("socket����ʧ��\n");
        WSACleanup();
        return -1;
    }

    // ����Socket�ĵ�ַ�Ͷ˿�
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr("10.128.102.254");  // ������IP��ַ
    serverAddr.sin_port = htons(12345);

    // ���ӷ�����
    if (connect(clientSock, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR)
    {
        printf("����ʧ��.\n");
        closesocket(clientSock);
        WSACleanup();
        return -1;
    }

    printf("�������ӵ�������.\n");

    // �������ݵ�������
    const char* msg = "Hello, ������!";
    send(clientSock, msg, strlen(msg), 0);

    // ���շ�������Ӧ
    int len = recv(clientSock, buf, sizeof(buf), 0);
    if (len > 0)
    {
        buf[len] = '\0';
        printf("Receive: %s\n", buf);
    }

    // �ر�Socket
    closesocket(clientSock);
    WSACleanup();

    return 0;
}