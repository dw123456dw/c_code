#include <stdio.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode* next;
    
}ListNode;


void Swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void QSort(int* arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int begin = left, end = right;
    int key = begin;

    while (begin < end)
    {
        while (begin < end && arr[end] >= arr[key])
        {
            end--;
        }
        while (begin < end && arr[begin] <= arr[key])
        {
            begin++;
        }
        Swap(&arr[begin], &arr[end]);
    }
    Swap(&arr[begin], &arr[key]);

    QSort(arr, left, begin);
    QSort(arr, begin + 1, right);
}


bool isPalindrome(struct ListNode* head) {
    struct ListNode* cur = head;
    int count = 0;
    while (cur)
    {
        cur = cur->next;
        count++;
    }
    if (count == 1)
    {
        return true;
    }
    cur = head;
    int* ret = (int*)malloc(sizeof(int) * count);

    for (int i = 0; i < count; i++)
    {
        ret[i] = cur->val;
        cur = cur->next;
    }

    QSort(ret, 0, count - 1);
    int prev = 0, cur1 = 1;

    for (prev = 0, cur1 = 1; cur1 <= count - 1; cur1 += 2, prev += 2)
    {
        if (ret[prev] != ret[cur1])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    struct ListNode* head =(struct ListNode*)malloc(sizeof(ListNode));
    head->val = 1;

    struct ListNode* head1 =(struct ListNode*)malloc(sizeof(ListNode));
    head->next = head1;
    head1->val = 2;
    head1->next = NULL;

    isPalindrome(head);
    return 0;
}














