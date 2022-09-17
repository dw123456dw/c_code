#include <stdio.h>
#include <stdlib.h>



typedef struct List {
    int var;
    struct List* next;
} MyLinkedList;

MyLinkedList* CreatNode(int val)
{
    MyLinkedList* newhead = (MyLinkedList*)malloc(sizeof(MyLinkedList));
    newhead->var = val;
    newhead->next = NULL;
    return newhead;
}

MyLinkedList* myLinkedListCreate() {
    MyLinkedList* head = NULL;
    return head;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    MyLinkedList* cur = obj;
    int count = 0;
    while (cur != NULL)
    {
        count++;
        cur = cur->next;
    }
    if (count < index)
    {
        return -1;
    }
    cur = obj;
    while (index)
    {
        cur = cur->next;
        index--;
    }

    return cur->var;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* new = CreatNode(val);
    new->next = obj;
    obj = new;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* Tail = obj;

    while (Tail->next != NULL)
    {
        Tail = Tail->next;
    }

    Tail->next = CreatNode(val);
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    int count = 0,x=index-1;
    MyLinkedList* cur = obj;
    while (cur != NULL)
    {
        cur = cur->next;
        count++;
    }
    if (count == index)
    {
        cur = obj;
        while (cur->next != NULL)
        {
            cur = cur->next;
        }
        myLinkedListAddAtTail(cur, val);
    }
    else if (count < index)
    {
        return;
    }
    else if (count > index)
    {
        cur = obj;
        while (x>0)
        {
            cur = cur->next;
            x--;
        }
        MyLinkedList* new = CreatNode(val);
        new->next = cur->next;
        cur->next = new;
    }
    else if (index < 0)
    {
        myLinkedListAddAtHead(obj, val);
    }
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    int count = 0,x=index-1;

    MyLinkedList* cur = obj;

    while (x>0)
    {
        cur = cur->next;
        x--;
    }
    MyLinkedList* now = cur->next;
    if (now!=NULL)
    {
        MyLinkedList* nextnode = now->next;
        cur->next = nextnode;
        free(now);
    }
}

void myLinkedListFree(MyLinkedList* obj) {
    if (obj)
    {
        return;
    }
    MyLinkedList* cur = obj;
    MyLinkedList* nextnode = cur->next;

    while (nextnode)
    {
        free(cur);
        cur = nextnode;
        nextnode = nextnode->next;
    }
    free(cur);
    cur = NULL;
}

void print(MyLinkedList* head)
{
    MyLinkedList* cur = head;
    while (cur)
    {
        printf("%d" ,cur->var);
        cur = cur->next;
    }
}

int main()
{
    MyLinkedList* head = myLinkedListCreate();
    myLinkedListAddAtHead(head, 7);
    myLinkedListAddAtHead(head, 2);
    myLinkedListAddAtHead(head,1);
    myLinkedListAddAtIndex(head,3, 0);
    //print(head);
    //myLinkedListDeleteAtIndex(head,2);


    return 0;
}