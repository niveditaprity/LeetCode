/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode*temp=head;
        int t=0;
        while(temp)
        {
            temp=temp->next;
            t++;
        }
        int x=k-1;
        int p=t-k;
        ListNode*first=head;
        while(x--)
        {
            first=first->next;
        }
     
        ListNode*second=head;
        while(p--)
        {
          second=second->next;  
        }
        swap(first->val,second->val);
        return head;
        
    }
};
