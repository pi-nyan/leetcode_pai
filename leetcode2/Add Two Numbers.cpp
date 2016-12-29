/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}

};

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		const auto head = 0;
		auto carryBit = 0;
		ListNode* result = new ListNode(head);
		ListNode* addNode = result;
		while (l1 || l2)
		{
			auto n1 = l1 ? l1->val : 0;
			auto n2 = l2 ? l2->val : 0;
			auto sum = n1 + n2 + carryBit;
			carryBit = sum / 10;
			addNode->next = new ListNode(sum % 10);
			addNode = addNode->next;
			if (l1)
			{
				l1 = l1->next;
			}
			if (l2)
			{
				l2 = l2->next;
			}
		}
		if (carryBit)
		{
			addNode->next = new ListNode(1);
		}
		return result->next;
	}
};

