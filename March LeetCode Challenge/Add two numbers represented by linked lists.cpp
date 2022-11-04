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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode*sum=new ListNode(0);
        ListNode*head=sum;
        int c=0;
        int p,q;
        while(l1!=NULL || l2!=NULL)
        {
          if(l1!=NULL)
          {
              p=l1->val;
          }
            else
            {
                p=0;
            }
            if(l2!=NULL)
            {
                q=l2->val;
            }
            else
            {
                q=0;
            }
            int s=p+q+c;
            sum->next=new ListNode(s%10);
            c=s/10;
            
        sum=sum->next;
            if(l1!=NULL)
            {
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                l2=l2->next;
            }
        }
        if(c>0)
        {
         sum->next=new ListNode(c);   
        }
        return head->next;
        
    }
};
