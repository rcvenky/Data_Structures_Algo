Given the head of a singly linked list, return true if it is a palindrome.

 

Example 1:


Input: head = [1,2,2,1]
Output: true
Example 2:


Input: head = [1,2]
Output: false
 

Constraints:

The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9

  
  class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return 0;
        vector<int> ans;
        while(head){
        ans.push_back(head->val);
            head=head->next;
        }
        int n=ans.size();
        for(int i=0;i<n/2;i++){
            if(ans[i]!=ans[n-i-1])
            {
                return false;
            }    
            }
        return true;
     }
};
