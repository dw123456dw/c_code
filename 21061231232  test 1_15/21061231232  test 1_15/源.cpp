#include <iostream>
using namespace std;
#include <vector>

int minMaxGame(vector<int>& nums) {
    int n = nums.size();
    if (n == 1)
    {
        return nums[0];
    }

    while (nums.size() != 1)
    {
        vector<int> arr(nums.size()/2);
        for (int i = 0; i < nums.size()/2; i++)
        {
            if (i % 2 == 0)
            {
                arr[i] = min(nums[2 * i], nums[2 * i + 1]);
            }
            else
            {
                arr[i] = max(nums[2 * i], nums[2 * i + 1]);
            }
        }
        nums.clear();
        for (int i = 0; i < arr.size(); i++)
        {
            nums.push_back(arr[i]);
        }
    }
    return nums[0];
}

int main()
{
    vector<int> a = { 1,3,5,2,4,8,2,2 };
    cout << minMaxGame(a);

    return 0;
}