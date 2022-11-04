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
    ListNode* partition(ListNode* head, int x) {
      if(head==NULL)
      {
          return NULL;
      }
      ListNode*smallerEle = new ListNode(-1);
      ListNode*greaterEle = new ListNode(-1);
      smallerEle->next = head;
      greaterEle->next = head;
      ListNode*smallerEleHead = smallerEle;
      ListNode*greaterEleHead= greaterEle;
      while(head!=NULL)
      {
          if(head->val<x)
          {
              smallerEle->next = head;
              smallerEle = smallerEle->next;
          }
          else
          {
             greaterEle->next = head;
             greaterEle = greaterEle->next;
          }
          head=head->next;
      }
        greaterEle->next = NULL;
        smallerEle->next = greaterEleHead->next;
        return  smallerEleHead->next;
    }
};

