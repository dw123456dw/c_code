#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode* next;
};


struct ListNode* InitList()                                                //初始化链表
{
    struct ListNode* phead = (struct ListNode*)malloc(sizeof(struct ListNode));  //一般不会申请失败因此就简略写了
    phead->next = NULL;
    return phead;
}


struct ListNode* creatNode(int x)
{
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));

    newNode->val = x;
    newNode->next = NULL;

    return newNode;
}




void ListPushBack(struct ListNode* phead, int x)                                      //尾插
{
    struct ListNode* newNode = creatNode(x);

    struct ListNode* cur = phead;

    while (cur->next != NULL)
    {
        cur = cur->next;
    }

    cur->next = newNode;
}





struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {


    struct ListNode* list3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* cur3 = list3;
    struct ListNode* head = list3;
    struct ListNode* cur1 = list1;
    struct ListNode* cur2 = list2;

    if (cur2 == NULL)
    {
        return cur1;
    }

    if (cur1 == NULL)
    {
        return cur2;
    }

    while ((cur1 != NULL) && (cur2 != NULL))     //当1或2到尾结束
    {
        if (cur1->val <= cur2->val)
        {
            cur3->next = cur1;
            cur3 = cur3->next;
            cur1 = cur1->next;
            cur3->next = NULL;
        }
        else
        {
            cur3->next = cur2;
            cur3 = cur3->next;
            cur2 = cur2->next;
            cur3->next = NULL;
        }
    }

    if (cur1 != NULL)
    {
        cur3->next = cur1;
    }

    if (cur2 != NULL)
    {
        cur3->next = cur2;
    }

    return head->next;

}


int main()
{
    struct ListNode L1;
    struct ListNode* L2 = &L1;

    struct ListNode L3;
    struct ListNode* L4 = &L3;
    L4 = InitList();
    L2 = InitList();

    ListPushBack(L2, 1);
    ListPushBack(L2, 2);
    ListPushBack(L2,4);

    ListPushBack(L4, 1);
    ListPushBack(L4, 3);
    ListPushBack(L4, 4);

    
    struct ListNode L5;
    struct ListNode* L6 = &L5;
    //L6 = InitList();

    L6 = mergeTwoLists(L2->next,L4->next);


}