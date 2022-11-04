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
      
        ListNode*l1=headA;
        ListNode*l2=headB;
        
        int len1=0,len2=0;
        
        while(l1!=NULL)
        {
            len1++;
            l1=l1->next;
        }
        
        while(l2!=NULL)
        {
            len2++;
            l2=l2->next;
        }
        
        l1=headA;
        l2=headB;
        if(len1>len2)
        {
            int diff=len1-len2;
            for(int i=0;i<diff;i++)
            {
                l1=l1->next;
            }
        }
        if(len2>len1)
        {
            int diff=len2-len1;
            for(int i=0;i<diff;i++)
            {
                l2=l2->next;
            }
        }
        
        while(l1!=l2)
        {
            l1=l1->next;
            l2=l2->next;
        }
        return l1;
    }
};
