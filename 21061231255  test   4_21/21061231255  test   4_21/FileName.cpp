#include <iostream>
using namespace std;
#include <vector>


int check(vector<vector<char>>& matrix, int i, int j, int m, int n, int pos)
{
    for (int x = i;x < m && x <= i + 1;x++)    //ÐÐ
    {
        if (matrix[x][j + 1] != '1')
        {
            return pos;
        }
    }

    for (int y = j;y < n && y <= i + 1;y++)   //ÁÐ
    {
        if (matrix[i + 1][y] != '1')
        {
            return pos;
        }
    }

    return check(matrix, i + 1, j + 1, m, n, pos + 1);
}

int maximalSquare(vector<vector<char>>& matrix) {
    int ans = 0;
    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0;i < m;i++)
    {
        for (int j = 0;j < n;j++)
        {
            if (matrix[i][j] == '1')
            {
                ans = max(ans, check(matrix, i, j, m, n, 1));
            }
        }
    }

    return ans;
}



int main()
{
    vector<vector<char>> matrix;
    vector<char> a = {'1','0','1','0','0'};
    vector<char> b = {'1','0','1','1','1'};
    vector<char> c = { '1','1','1','1','1' };
    vector<char> d = { '1','0','0','1','0' };
    matrix.push_back(a);
    matrix.push_back(b);
    matrix.push_back(c);
    matrix.push_back(d);
    
    cout << maximalSquare(matrix);
    return 0;
}