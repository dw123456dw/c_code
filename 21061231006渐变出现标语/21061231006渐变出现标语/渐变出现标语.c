#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "I am the king of school!!!";
	char arr2[] = "##########################";

	int left = 0;//���±�
	int right = strlen(arr1) - 1;//���±�
	while(left<=right)//�������±��ཻ�Ҵ�ʱ����ӡ������
	{
		arr2[left] = arr1[left];//��2���±����һ���±�ﵽ�����Ч����
		arr2[right] = arr1[right];//ͬ��һ��ע��
		left++;
		right--;
		printf("%s\n",arr2);
	}
}