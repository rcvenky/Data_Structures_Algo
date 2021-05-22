Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

 

Example 1:


Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: l1 = [], l2 = []
Output: []
Example 3:

Input: l1 = [], l2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both l1 and l2 are sorted in non-decreasing order.
  
  
  //Coding
  
  class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode();//List
        ListNode* temp=l3;//pointer which points to the current
        
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        while(l1 && l2)
        {
            if(l1->val <= l2->val)
            {
                temp->next=l1;
                temp=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                temp=l2;
                l2=l2->next;
            }  
        }
        if(l1!=NULL)
        { 
            temp->next=l1;
        }
       if(l2!=NULL){
           temp->next=l2;
            }
        return l3->next;
    }
};
