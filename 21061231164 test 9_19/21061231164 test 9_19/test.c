#include <stdio.h>




void Swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void moveZeroes(int* nums, int numsSize) {
    int i = 0, j = 0;

    while (i < numsSize - 1)
    {
        if (nums[i] == 0)
        {
            j = i+1;
            while (j < numsSize - 1)
            {
                if (nums[j]!= 0)
                {
                    break;
                }
                j++;
            }
            Swap(&nums[i], &nums[j]);
        }
        i++;
    }

    return nums;
}



int main()
{
    int arr[] = { 0,1,0,3,12 };
    moveZeroes(arr,5);


    return 0;
}