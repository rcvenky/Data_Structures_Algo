Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]
Example 2:

Input: head = [5], left = 1, right = 1
Output: [5]
 

Constraints:

The number of nodes in the list is n.
1 <= n <= 500
-500 <= Node.val <= 500
1 <= left <= right <= n


class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        //ListNode* lef=head,*rig=head;
        while(left < right){
        ListNode* lef=head,*rig=head;
        for(int i=1;i<left;i++)
        {
            lef=lef->next;
        }
        for(int i=1;i<right;i++)
        {
            rig=rig->next;
        }
        swap(lef->val,rig->val);
        lef=lef->next;
        left++,right--;
        }
        return head;
    }
};