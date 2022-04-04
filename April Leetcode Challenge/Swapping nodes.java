/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
      ListNode temp=head;
      ListNode beg=head;
      ListNode end=head;
      int count=0;
        while(temp!=null)
        {
            temp=temp.next;
            count++;
        }
        int x=k-1;
        while(x>0)
        {
            beg=beg.next;
            x--;
        }
        int p=count-k;
        while(p>0)
        {
            end=end.next;
            p--;
        }
        int v=beg.val;
        beg.val=end.val;
            end.val=v;
        return head;
        
    }
}
