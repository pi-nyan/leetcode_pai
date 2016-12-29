/*
Approach #3 (Two Pointers) [Accepted]

Maintain two pointers pA and pB initialized at the head of A and B, respectively. Then let them both traverse through the lists, one node at a time.
When pA reaches the end of a list, then redirect it to the head of B (yes, B, that's right.); similarly when pB reaches the end of a list, redirect it the head of A.
If at any point pA meets pB, then pA/pB is the intersection node.
To see why the above trick would work, consider the following two lists: A = {1,3,5,7,9,11} and B = {2,4,9,11}, which are intersected at node '9'. Since B.length (=4) < A.length (=6), pB would reach the end of the merged list first, because pB traverses exactly 2 nodes less than pA does. By redirecting pB to head A, and pA to head B, we now ask pB to travel exactly 2 more nodes than pA would. So in the second iteration, they are guaranteed to reach the intersection node at the same time.
If two lists have intersection, then their last nodes must be the same one. So when pA/pB reaches the end of a list, record the last element of A/B respectively. If the two last elements are not the same one, then the two lists have no intersections.

Complexity Analysis

Time complexity : O(m+n)O(m+n)O(m+n).
Space complexity : O(1)O(1)O(1).

Analysis written by @stellari.
*/

/*
it's so cooool!
*/

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode *la = headA;
		ListNode *lb = headB;
		if (la == NULL || lb == NULL)
			return NULL;
		bool switch1 = true;
		bool switch2 = true;
		while (la != NULL&&lb != NULL)
		{
			if (la == lb)
				return la;
			la = la->next;
			lb = lb->next;

			if (la == NULL&&switch1)
			{
				la = headB;
				switch1 = false;
			}
			if (lb == NULL&&switch2)
			{
				lb = headA;
				switch2 = false;
			}

		}
		return NULL;
	}
};