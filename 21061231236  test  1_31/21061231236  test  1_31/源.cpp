#include <iostream>
using namespace std;
#include <stack>
#include <string>
#include <vector>
typedef struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
    
}node;
ListNode* oddEvenList(ListNode* head) {

    ListNode* single = NULL;
    ListNode* two = NULL;

    single = head;
    two = head->next;
    ListNode* tail = single;
    ListNode* tail2 = two;
    ListNode* cur = two->next;

    int index = 3;
    while (cur != NULL)
    {
        if (index % 2 != 0)
        {
            tail->next = cur;
            tail = cur;
        }
        else
        {
            tail2->next = cur;
            tail2 = cur;
        }
        index++;
        cur = cur->next;
    }
    tail2->next = NULL;
    tail->next = two;

    return head;
}



int evalRPN(vector<string>& tokens) {
    stack<long> temp;

    for (int i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+")
        {
            int a = temp.top();
            temp.pop();
            int b = temp.top();
            temp.pop();
            temp.push(a + b);
        }
        else if (tokens[i] == "-")
        {
            int a = temp.top();
            temp.pop();
            int b = temp.top();
            temp.pop();
            temp.push(b - a);
        }
        else if (tokens[i] == "*")
        {
            int a = temp.top();
            temp.pop();
            int b = temp.top();
            temp.pop();
            temp.push(a * b);
        }
        else if (tokens[i] == "/")
        {
            int a = temp.top();
            temp.pop();
            int b = temp.top();
            temp.pop();
            temp.push(b / a);
        }
        temp.push(atoi(tokens[i].c_str()));
    }
    return temp.top();
}


int main()
{
    //node* n1 = new node(1);
    //node* n2 = new node(2);
    //node* n3 = new node(3);
    //node* n4 = new node(4);
    //node* n5=new node(5);
    //n1->next = n2;
    //n2->next = n3;
    //n3->next = n4;
    //n4->next = n5;

    //oddEvenList(n1);
    vector<string> s = { "2","1","+","3","*" };
    evalRPN(s);


    return 0;
}