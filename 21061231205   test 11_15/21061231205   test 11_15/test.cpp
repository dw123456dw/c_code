#include <iostream>
using namespace std;
#include <vector>


void qsort(vector<int> &arr,int left,int right)
{
	if (left>=right)
	{
		return;
	}

	int begin = left;
	int end = right;
	int key = begin;

	while (begin<end)
	{
		while (begin<end && arr[end]>=arr[key])
		{
			end--;
		}

		while (begin<end && arr[begin]<=key)
		{
			begin++;
		}

		swap(arr[begin],arr[end]);
	}
	swap(arr[begin], arr[key]);
	qsort(arr,left,begin);
	qsort(arr,begin+1,right);
}

int check(vector<int> arr,int val)
{
	int left = 0;
	int right = arr.size() - 1;
	int mid = (left + right) / 2;

	while (left<=right)
	{
		if (arr[mid]==val)
		{
			return mid;
		}

		if (arr[mid]>val)
		{
			right = mid-1;
		}

		if (arr[mid]<val)
		{
			left = mid+1;
		}
		mid = (left + right) / 2;

	}
	return -1;
}

void test1()
{
	vector<int> arr = { 5,4,2,7,6,3,10,2,0,1,8 };
	qsort(arr,0,10);
	//for (int i=0;i<11;i++)
	//{
	//	cout << arr[i] << endl;
	//}
	//0,1,2,2,3,4,5,6,7,8,10
	int ret = check(arr,5);
	cout << ret;
}

int main()
{
	test1();

	return 0;
}