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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }
        int len=1;
        ListNode*curr=head;
        while(curr->next!=NULL)
        {
          len++;
            curr=curr->next;
        }
        ListNode*p=head;
        curr->next=head;
        int move=len-k%len-1;
        while(move--)
        {
            p=p->next;
        }
        ListNode*Head=p->next;
        p->next=NULL;
        return Head;
        
    }
};
