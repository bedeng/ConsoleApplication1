// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	ListNode* l3 ;
	while (l1->next&&l2->next)
	{
		int sum = l1->next->val + l2->next->val;
		if (sum > 10) 
		{
			l3->next->val = sum%10;
			if (l1->next->next)
			{
				(l1->next->next->val)++;
			}
			else if (l2->next->next)
			{
				(l2->next->next->val)++;
			}
		}
		else
		{
			l3->next->next->val = sum;
		}
		l3->next = l3->next->next;
		l1->next = l1->next->next;
		l2->next = l2->next->next;
	}
	while (l1)
	{
		l3->val = l1->val;
		l1 = l1->next;
		l3 = l3->next;
	}
	while (l2)
	{
		l3->val = l2->val;
		l2 = l2->next;
		l3 = l3->next;
	}
	return l3;
}

int main()
{

	ListNode* l1,*l2;



}