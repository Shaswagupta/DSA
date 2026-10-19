class Solution {
    public ListNode mergeNodes(ListNode head) {
        ListNode dummy = new ListNode(0);
        ListNode tail = dummy;
        ListNode temp = head.next;

        int sum = 0;

        while (temp != null) {
            if (temp.val == 0) {
                ListNode newNode = new ListNode(sum);

                tail.next = newNode;
                tail = newNode;

                sum = 0;
            } else {
                sum += temp.val;
            }

            temp = temp.next;
        }

        return dummy.next;
    }
}