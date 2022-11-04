class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
     if(head->next == NULL)
     {
         return NULL;
     }
     int countNodes = 0;
     ListNode*temp = head;
     while(temp!=NULL)
     {
         temp = temp->next;
         countNodes++;
     }
    int n = (countNodes/2)-1;
    temp = head;
    while(n--)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
    }
};
