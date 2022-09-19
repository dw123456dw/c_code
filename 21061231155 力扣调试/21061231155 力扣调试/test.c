#include <stdio.h>
#include <stdlib.h>
typedef struct List {
    int var;
    struct List* next;
} MyLinkedList;

MyLinkedList* CreatNode(int x)
{
    MyLinkedList* newnode = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    newnode->next = NULL;
    newnode->var = x;
    return newnode;
}

MyLinkedList* myLinkedListCreate() {
    MyLinkedList* head = CreatNode(-1);
    return head;
}
int myLinkedListGet(MyLinkedList* obj, int index) {
    int count = 0;
    MyLinkedList* cur = obj;
    index += 1;

    if (cur->next == NULL)
    {
        return -1;
    }

    cur = cur->next;
    while (cur != NULL)
    {
        cur = cur->next;
        count++;
    }

    cur = obj;
    if (count >= index)
    {
        while (index--)
        {
            cur = cur->next;
        }
        return cur->var;
    }
    else
    {
        return -1;
    }
}
void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* newnode = CreatNode(val);
    MyLinkedList* cur = obj;
    if (cur->next == NULL)
    {
        cur->next = newnode;
    }
    else
    {
        newnode->next = cur->next;
        cur->next = newnode;
    }
}
void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* Tail = obj->next;
    MyLinkedList* newnode = CreatNode(val);

    if (Tail == NULL)
    {
        myLinkedListAddAtHead(obj, val);
    }
    else
    {
        while (Tail->next != NULL)
        {
            Tail = Tail->next;
        }
        Tail->next = newnode;
    }
}
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    MyLinkedList* newnode = CreatNode(val);
    MyLinkedList* cur = obj;
    int count = 0;
    cur = cur->next;
    while (cur != NULL)
    {
        cur = cur->next;
        count++;
    }
    cur = obj;
    if (index < 0 || (count == 1 && index == 0))
    {
        myLinkedListAddAtHead(obj, val);
    }
    if (count == index)
    {
        myLinkedListAddAtTail(obj, val);
    }
    else if (count < index)
    {
        return;
    }
    else
    {
        while (--index>=0)
        {
            cur = cur->next;
        }
        if (index>=0)
        {
            newnode->next = cur->next;
            cur->next = newnode;
        }
    }
}
int main()
{
    MyLinkedList* M = myLinkedListCreate();
    myLinkedListAddAtHead(M,2);
    myLinkedListAddAtIndex(M,0,1);
    int ret = myLinkedListGet(M,1);

    printf("%d",ret);
    return 0;
}