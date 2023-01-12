#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    if (intervals.size() == 1)
    {
        return intervals;
    }
    int prev = 0, cur = 1;

    while (cur < intervals.size())
    {
        int left = intervals[prev][1];
        int right = intervals[cur][0];
        if (left >= right)
        {
            vector<int> a;
            a.push_back(intervals[cur][0]);
            a.push_back(intervals[cur][1]);
            a.push_back(intervals[prev][0]);
            a.push_back(intervals[prev][1]);
            sort(a.begin(), a.end());
            ans.push_back(vector<int>());
            ans.back().push_back(a[0]);
            ans.back().push_back(a[3]);
            cur += 2;
            prev += 2;
        }
        else
        {
            ans.push_back(vector<int>());
            ans.back().push_back(intervals[prev][0]);
            ans.back().push_back(intervals[prev++][1]);
        }

    }
    return ans;
}

bool increasingTriplet(vector<int>& nums) {
    if (nums.size() < 3)
    {
        return false;
    }
    int i = 0, j = 1, k = 2;

    while (k < nums.size())
    {
        if (nums[i++] < nums[j] && nums[j] < nums[k])
        {
            return true;
        }
        j++;
        k++;
    }
    return false;
}


int main()
{
    //vector<vector<int>> a = { {1,4} ,{2,3} };

    //merge(a);
    vector<int> a = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        ,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
        1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        ,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
        ,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
        
    increasingTriplet(a);

    return 0;
}