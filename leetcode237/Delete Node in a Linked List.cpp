/**
*237. Delete Node in a Linked List

* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	void deleteNode(ListNode* node) {
		node->val = node->next->val;
		ListNode *del = node->next;
		node->next = del->next;

		del->val = 0;
		del->next = NULL;
	}
};