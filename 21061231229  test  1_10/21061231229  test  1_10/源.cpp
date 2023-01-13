#include <iostream>
using namespace std;
#include <vector>

vector<vector<int>> ans;
vector<int> temp;
void backtracking(int n, int k, int startindex)
{
    if (temp.size() == k)
    {
        ans.push_back(temp);
        return;
    }
    //单层循环
    for (int i = startindex; i <= n; i++)
    {
        temp.push_back(i);
        backtracking(n, k, i + 1);
        temp.pop_back();
    }
}
vector<vector<int>> combine(int n, int k) {
    backtracking(n, k, 1);
    return ans;
}

int main()
{
    combine(4,2);
    return 0;
}