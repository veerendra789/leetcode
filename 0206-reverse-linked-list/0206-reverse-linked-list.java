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
    public ListNode reverseList(ListNode head) {
        ListNode current=head;
        if(head==null){
            return head;
        }
        ListNode pre=null;
        ListNode next=current.next;
        while(current!=null){
            current.next=pre;
            pre=current;
            current=next;
            if(next!=null){
                next=current.next;
            }
        }
        head=pre;
        return head;
    }
}