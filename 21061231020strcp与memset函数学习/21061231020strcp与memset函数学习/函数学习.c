#include <stdio.h>
//strcpy
//int main()
//{
//	char arr1[] = {"hhh"};
//	char arr2[20] = {"##############"};
//	strcpy(arr2, arr1);//��߷�Ŀ�꣬�ұ߷�ԭ�ַ�����
//	printf("%s\n",arr2);//ע�⣺��ʱarr2ֻ��ӡhhh����Ϊstrcpy�������ԭ�ַ�����β��\0Ҳ���ơ�
//	return 0;
//}

int main()
{
	char arr[] = {"hello world"};
	memset(arr,'#',5);//���ΪĿ�꣬�м�ΪҪ����Ķ������ұ�Ϊ����ĸ�����
	printf("%s\n",arr);
	return 0;
}