#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ͳ�ƶ�������1�ĸ����

//int count_bite_one(unsigned int n)//unsigned int���������
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	//�����ڴ������Բ�����ʽ��ŵ�
//	int i = 0;
//	printf("����һ����:");
//	scanf("%d",&i);
//	int count= count_bite_one(i);
//	printf("n�Ķ�������һ�ĸ���Ϊ%d",count);
//	return 0;
//}

//int count_bite_one(int n)//�ڶ����㷨
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	//�����ڴ������Բ�����ʽ��ŵ�
//	int i = 0;
//	printf("����һ����:");
//	scanf("%d", &i);
//	int count = count_bite_one(i);
//	printf("n�Ķ�������һ�ĸ���Ϊ%d", count);
//	return 0;
//}//nb

int count_bite_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//���nb
		count++;
	}
	return count;
}
int main()
{
	//�����ڴ������Բ�����ʽ��ŵ�
	int i = 0;
	printf("����һ����:");
	scanf("%d", &i);
	int count = count_bite_one(i);
	printf("n�Ķ�������һ�ĸ���Ϊ%d", count);
	return 0;
}
















































//int main()//����
//{
//    int i, j, k;
//    i = 1;
//    while (i < 5)//��
//    {
//        j = 1;
//        while (j < 5 - i)
//        {
//            printf(" ");
//            j++;
//        }
//        k = 1;
//        while (k <= 2 * i - 1)
//        {
//            printf("*");
//            k++;
//        }
//        i++;
//        printf("\n");
//    }
//    return 0;
//}