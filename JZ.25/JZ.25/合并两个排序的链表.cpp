#include <iostream>
#include <list>
using namespace std;

struct ListNode
{
	int m_nValue;
	ListNode* m_pNext;
};

//´´½¨Á´±í
ListNode* Create()
{
	int n = 0;
	ListNode* head, *p1, *p2;
	p1 = p2 = new ListNode;
	cin >> p1->m_nValue;
	head = NULL;
	while (p1->m_nValue != 0)
	{
		if (n == 0)
		{
			head = p1;
			head->m_pNext = p2;
		}
		else
		{
			p2->m_pNext = p1;
		}
		p2 = p1;
		p1 = new ListNode;
		cin >> p1->m_nValue;
		n++;
	}
	p2->m_pNext = NULL;
	return head;
}

void print(ListNode* head)
{
	for (ListNode* tmp = head; tmp != NULL; tmp = tmp->m_pNext)
	{
		cout << tmp->m_nValue << " ";
	}
	cout << endl;
}


ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
{
	if (pHead1 == nullptr)
	{
		return pHead2;
	}
	else if (pHead2 == nullptr)
	{
		return pHead1;
	}

	ListNode* pMergedHead = nullptr;

	if (pHead1->m_nValue < pHead2->m_nValue)
	{
		pMergedHead = pHead1;
		pMergedHead->m_pNext = Merge(pHead1->m_pNext, pHead2);
	}
	else
	{
		pMergedHead = pHead2;
		pMergedHead->m_pNext = Merge(pHead1, pHead2->m_pNext);
	}

	return pMergedHead;
}

int main()
{
	ListNode* head1 = Create();
	ListNode* head2 = Create();

	print(head1);
	print(head2);

	ListNode* head3 = Merge(head1, head2);
	print(head3);

	system("pause");
	return 0;
}