#include <iostream>
using namespace std;



int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    *returnColumnSizes = (int*)malloc(sizeof(int) * n);
    int** ret = (int**)malloc(sizeof(int*) * n);
    

    int up = 0, down = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (true)
    {
        for (int i = left; i <= right; i++)
        {
            ret[up][i] = num++;
        }
        if (++up > down)
            break;
        for (int i = up; i <= down; i++)
        {
            ret[i][right] = num++;
        }
        if (--right < left)
            break;
        for (int i = right; i >= left; i--)
        {
            ret[down][i] = num++;
        }
        if (--down < up)
            break;
        for (int i = down; i >= up; i--)
        {
            ret[i][left] = num++;
        }
        if (++left > right)
            break;
    }

    return ret;
}





int main()
{



	return 0;
}