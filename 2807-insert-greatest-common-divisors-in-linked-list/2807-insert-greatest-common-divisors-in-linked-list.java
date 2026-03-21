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
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        ListNode first=head;
        while(first.next!=null){
            ListNode next=first.next;
            int hcf=hcf(first.val,next.val);
            ListNode newnode=new ListNode(hcf);
            newnode.next=next;
            first.next=newnode;
            first=next;
        }
        return head;
    }
    public int hcf(int a,int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
}