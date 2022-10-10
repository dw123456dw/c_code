#include <iostream>
using namespace std;
#include <vector>

int minSubArrayLen(int target, vector<int>& nums) {
    int ans =INT_MAX;

    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j=i;j<nums.size();j++)
        {
            sum += nums[j];
            if (sum>=target)
            {
                ans = min(ans,j-i+1);
                break;
            }
        }
    }
    return ans== INT_MAX?0:ans;
}




int main()
{
    //vector<int> v;
    //v.push_back(5);
    //v.push_back(1);
    //v.push_back(3);
    //v.push_back(5);
    //v.push_back(10);
    //v.push_back(7);
    //v.push_back(4);
    //v.push_back(9);
    //v.push_back(2);
    //v.push_back(8);


    //int min = minSubArrayLen(15,v);
    char str[] = "hello";
    int sz=sizeof(str);


	return 0;
}







//int main()
//{
//	vector<int> v;
//	//v.push_back(1);
//	//v.push_back(2);
//	//v.push_back(3);
//	//v.push_back(4);
//	//v.push_back(5);
//	//v.push_back(6);
//	//v.push_back(7);
//	v.push_back(-1);
//	v.push_back(-100);
//	v.push_back(3);
//	v.push_back(99);
//
//	reverse(v.begin(),v.begin()+2+1);
//	reverse(v.begin()+2+1,v.end());
//	reverse(v.begin(),v.end());
//
//
//	return 0;
//}