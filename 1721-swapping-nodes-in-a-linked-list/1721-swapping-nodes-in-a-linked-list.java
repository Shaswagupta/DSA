class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        ListNode first = head;
        ListNode temp = head;

        for (int i = 1; i < k; i++) {
            first = first.next;
        }

        ListNode second = head;
        temp = first;

        while (temp.next != null) {
            temp = temp.next;
            second = second.next;
        }

        int value = first.val;
        first.val = second.val;
        second.val = value;

        return head;
    }
}