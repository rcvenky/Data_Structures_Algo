Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

Example 1:


Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]
 

Constraints:

The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.
  
  class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL)
        return NULL;
        ListNode* temp=head;
        while(temp !=NULL && temp->next!=NULL)
        {
            if(temp->next->val==temp->val)
                temp->next=temp->next->next;
            else
                temp=temp->next;
        }
        // while(head !=NULL && head->next->val == head->val)
        // {
        //     head=head->next;
        // }
        // ListNode* temp1=head;
        // ListNode* temp2=head->next;
        // while(temp1 && temp2->next)
        // {
        //     if(temp2->val == temp1->val)
        //     temp1->next=temp2->next;
        //     else
        //         temp1=temp2; 
        // }
        return head;
    }
};
