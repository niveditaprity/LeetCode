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
  ListNode*merge(ListNode*l1,ListNode*l2)
  {
  ListNode*temp=NULL;
  if(l1==NULL)
  {
return l2;
}
if(l2==NULL)
{
return l1;
}
if(l1->val>=l2->val)
{
temp=l2;
temp->next=merge(l1,l2->next);
}
if(l1->val<l2->val)
{
temp=l1;
temp->next=merge(l1->next,l2);
}
return temp;
}

     
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    if(lists.size()<=0)
    {
    return NULL;
    }
        
       ListNode*temp1=lists[0];
       ListNode*temp2;
       for(int i=1;i<lists.size();i++)
       {
       temp2=lists[i];
       temp1=merge(temp1,temp2);
       
    }
    return temp1;
    }
};

