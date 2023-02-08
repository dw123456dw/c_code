#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

vector<int> productExceptSelf(vector<int>& nums) {

    int n = nums.size();
    int left = 1, right = 1;     //left：从左边累乘，right：从右边累乘
    vector<int> res(n, 1);

    for (int i = 0; i < n; ++i)    //最终每个元素其左右乘积进行相乘得出结果
    {
        res[i] *= left;       //乘以其左边的乘积
        left *= nums[i];

        res[n - 1 - i] *= right;  //乘以其右边的乘积
        right *= nums[n - 1 - i];
    }
    return res;
}

int main()
{
    vector<int> a = {1,2,3,4};
    productExceptSelf(a);
    unordered_map<int, vector<string>> hash;
    
    return 0;
}