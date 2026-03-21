class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        // Dummy node
        ListNode dummy = new ListNode(0);
        dummy.next = head;

        ListNode prev = dummy;

        while (head != null) {
            // Check if duplicate exists
            if (head.next != null && head.val == head.next.val) {
                
                // Skip all nodes with same value
                while (head.next != null && head.val == head.next.val) {
                    head = head.next;
                }
                
                // Remove duplicates completely
                prev.next = head.next;
            } else {
                // Move prev only if no duplicate
                prev = prev.next;
            }

            head = head.next;
        }

        return dummy.next;
    }
}