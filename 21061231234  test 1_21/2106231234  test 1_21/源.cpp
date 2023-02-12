#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

int numSubarraysWithSum(vector<int>& nums, int goal) {
    int sum = 0;
    unordered_map<int, int> cnt;
    int ret = 0;
    for (auto& num : nums) {
        cnt[sum]++;
        sum += num;
        ret += cnt[sum - goal];
    }
    return ret;
}


int main()
{
    vector<int> a = {1,0,1,0,1};
    cout << numSubarraysWithSum(a,2);

    return 0;
}