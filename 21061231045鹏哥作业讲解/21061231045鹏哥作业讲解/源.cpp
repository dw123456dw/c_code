#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//统计二进制中1的格个数

//int count_bite_one(unsigned int n)//unsigned int处理负数情况
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
//	//数在内存中是以补码形式存放的
//	int i = 0;
//	printf("输入一个数:");
//	scanf("%d",&i);
//	int count= count_bite_one(i);
//	printf("n的二进制中一的个数为%d",count);
//	return 0;
//}

//int count_bite_one(int n)//第二种算法
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
//	//数在内存中是以补码形式存放的
//	int i = 0;
//	printf("输入一个数:");
//	scanf("%d", &i);
//	int count = count_bite_one(i);
//	printf("n的二进制中一的个数为%d", count);
//	return 0;
//}//nb

int count_bite_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);//真的nb
		count++;
	}
	return count;
}
int main()
{
	//数在内存中是以补码形式存放的
	int i = 0;
	printf("输入一个数:");
	scanf("%d", &i);
	int count = count_bite_one(i);
	printf("n的二进制中一的个数为%d", count);
	return 0;
}
















































//int main()//临行
//{
//    int i, j, k;
//    i = 1;
//    while (i < 5)//行
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