#include <iostream>
using namespace std;
#include <vector>

int map[110][110];
int pos[1000][1000];

void pushmap(int ans, int x, int y, int l, int d)
{
    for (int i = y;d-->=0;i++)
    {
        int temp = l;
        for (int j = x,l=temp-1;l-->=0;j++)
        {
            map[i][j] = ans;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < 4;j++)
        {
            int a;
            cin >> a;
            pos[i][j] = a;
        }
    }

    int x, y;
    cin >> x >> y;

    for (int i = 0;i < n;i++)
    {
        pushmap(i + 1, pos[i][0], pos[i][1], pos[i][2], pos[i][3]);
    }
    if (map[x][y]==0)
    {
        cout << -1;
        return 0;
    }
    cout << map[x][y];
    return 0;
}
