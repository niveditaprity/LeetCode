class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       if(head==NULL || head->next==NULL)
       {
           return head;
       }
       
        ListNode*p=new ListNode(-1);
        p->next=head;
        ListNode*head1=p;
        while(p->next!=NULL && p->next->next!=NULL)
        {
            ListNode*p1=p->next;
            ListNode*p2=p->next->next;
            
            if(p1->val==p2->val)
            {
                ListNode*temp=p2;
                while(temp!=NULL&&p1->val==temp->val)
                {
                    temp=temp->next;
                }
                p->next=temp;
            }
            else
            {
                p=p->next;
            }
        }
        return head1->next;
            
    }
};
