#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    sort(nums.begin(), nums.end());
    int i = 0;

    vector<int> ans(queries.size());

    for (int j = 0; j < queries.size(); j++)
    {
        int sum = 0;
        int count = 0;
        while (sum < queries[j] && i < nums.size())
        {
            count++;
            sum += nums[i++];
        }
        i = 0;
        ans[j] = count;
    }

    return ans;
}


int main()
{
    vector<int> a1 = { 4,5,2,1 };
    vector<int> a2 = {3,10,21};
    vector<int> a3 = answerQueries(a1,a2);


    return 0;
}